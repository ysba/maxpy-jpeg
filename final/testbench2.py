from MAxPy import results
import importlib
from PIL import Image
from skimage.metrics import structural_similarity
import cv2
import os

bitstream = []
block_size = 64
group = "images"

def clock_cycle(ckt=None, qty=1):
    if ckt is None:
        print("clock_cycle error")
        exit(0)

    while qty > 0:
        ckt.eval()
        ckt.set_clk(1)
        ckt.eval()
        ckt.set_clk(0)
        qty -= 1

        if ckt.get_data_ready() == 1:
            data32 = ckt.get_JPEG_bitstream() & 0xffffffff
            bitstream.append((data32&0xff000000)>>24)
            bitstream.append((data32&0xff0000)>>16)
            bitstream.append((data32&0xff00)>>8)
            bitstream.append(data32&0xff)


def testbench_run(ckt=None, results_filename=None):

    global bitstream

    bitstream = []

    # https://people.math.sc.edu/Burkardt/data/tif/tif.html
    
    #image_path = "balloons.tif"
    #image_path = "ballocolumns.tif"
    image_path = "f14.tif"
    #image_path = "at3_1m4_01.tif"

    original_size = os.path.getsize(image_path)

    rst = results.ResultsTable(results_filename, ["ssim", "compression"])

    # load module
    jpeg = ckt.top()
    print(">>> testbench init")
    print(f">>> circuit: {jpeg.name()} {jpeg.parameters}, area: {jpeg.area:.2f}")

    # open test image
    image = Image.open(image_path)
    if image.mode != "RGB":
        print(">>> converting image to rgb")
        image = image.convert("RGB")
    rgb_data = list(image.getdata())
    pixel_count = len(rgb_data)

    width, height = image.size

    if width%8 != 0 or height%8 != 0:
        print(f">>> skipping image {image_path}, dimensions must be multiple of 8!")
        print(">>> testbench end")
        return



    block_width = width // 8
    block_height = height // 8
    rgb_blocks = []
    for i in range(block_height):
        for j in range(block_width):
            block = []
            for y in range(8):
                start_idx = (i * 8 + y) * width + j * 8
                end_idx = start_idx + 8
                block.extend(rgb_data[start_idx:end_idx])
            rgb_blocks.append(block)
    rgb_values = []
    for block in rgb_blocks:
        for pixel in block:
            rgb_values.append(pixel)
    #rgb_values = rgb_data

    block_count = pixel_count//block_size
    print(f">>> pixels: {pixel_count}")
    print(f">>> block_count: {block_count}")

    # initial sequence
    jpeg.set_rst(1)
    jpeg.set_data_in(0)
    jpeg.set_enable(0)
    jpeg.set_end_of_file_signal(0)
    clock_cycle(jpeg)

    jpeg.set_rst(0)

    print(">>> loop start")

    cycle_count = 0
    data_count = block_size

    for rgb in rgb_values:
        bin24 = rgb[2]*0x10000 + rgb[1]*0x100 + rgb[0]
        jpeg.set_data_in(bin24)
        jpeg.set_enable(1)
        if block_count == 1:
            jpeg.set_end_of_file_signal(1)
        else:
            jpeg.set_end_of_file_signal(0)
        clock_cycle(jpeg)

        data_count -= 1
        if data_count == 0:
            data_count = block_size
            clock_cycle(jpeg, 33)
            jpeg.set_enable(0)
            clock_cycle(jpeg)
            block_count -= 1

        cycle_count += 1

    jpeg.set_enable(0)
    clock_cycle(jpeg)

    print(">>> loop end")


    count = 10000
    while count > 0:
        clock_cycle(jpeg)
        if jpeg.get_eof_data_partial_ready() == 1:
            break
        count -= 1

    print(">>> bitstream len", len(bitstream))


    temp = image_path.split(".")[0]
    if jpeg.parameters != "":
        output_path = f"{group}/{temp}_{jpeg.name()}_{jpeg.parameters}.jpg"
    else:
        output_path = f"{group}/{temp}_{jpeg.name()}.jpg"

    with open("jpeg_base.bin", "rb") as fbase, open(output_path, "wb") as fout:
        # bitstream.append(0x3f)
        # bitstream.append(0x21)
        # bitstream.append(0xc5)
        # bitstream.append(0x00)
        bitstream.append(0xff)
        bitstream.append(0xd9)
        header = bytearray(fbase.read())

        header[0xa3] = ((height&0xffff) >> 8)
        header[0xa4] = (height&0xff)
        header[0xa5] = ((width&0xffff) >> 8)
        header[0xa6] = (width&0xff)

        fout.write(header)
        fout.write(bytes(bitstream))

        img_ref = cv2.imread(image_path, cv2.IMREAD_COLOR)
        img_compare = cv2.imread(output_path, cv2.IMREAD_COLOR)
        (ssim_value, diff) = structural_similarity(img_ref, img_compare, full=True, win_size=1, use_sample_covariance=False)
        compressed_size = os.path.getsize(output_path)
        compression_ratio = compressed_size / original_size
        print(f">>> ssim: {ssim_value:.6f}, compression: {compression_ratio:.3f}")

        rst.add(jpeg, {"ssim": f"{ssim_value:.6f}", "compression": f"{compression_ratio:.3f}"})

    print(">>> testbench end")

    ##TODO: check what value would be good for jpeg
    if ssim_value > 0.95:
        prun_flag = True
    else:
        prun_flag = False

    return prun_flag, []


if __name__ == "__main__":

    base = "pareto_circuits"

    ckt_list = [
        "jpeg_top.jpeg_top",
        "jpeg_top_eta1_9_LOBA2_4.jpeg_top",
        "jpeg_top_eta1_6_LOBA2_4.jpeg_top",
        "jpeg_top_eta1_8_LOBA2_4.jpeg_top",
        "jpeg_top_loa_8_LOBA2_4.jpeg_top",
        "jpeg_top_loa_13_LOBA0_4.jpeg_top",
        "jpeg_top_copyB_13_LOBA0_4.jpeg_top",
        "jpeg_top_trunc0_13_LOBA0_4.jpeg_top",
        "jpeg_top_trunc0_13_DRUM_6.jpeg_top",
        "jpeg_top_copyB_13_DRUM_6.jpeg_top",
        "jpeg_top_trunc1_13_DRUM_6.jpeg_top",
        "jpeg_top_copyB_12_DRUM_6.jpeg_top",
        "jpeg_top_trunc0_12_DRUM_6.jpeg_top",
        "jpeg_top_trunc1_12_DRUM_6.jpeg_top",
        "jpeg_top_copyB_11_DRUM_6.jpeg_top",
        "jpeg_top_trunc0_11_DRUM_6.jpeg_top",
        "jpeg_top_copyB_12_DRUM_7.jpeg_top",
        "jpeg_top_trunc0_12_DRUM_7.jpeg_top",
        "jpeg_top_trunc1_12_DRUM_7.jpeg_top",
        "jpeg_top_trunc0_11_DRUM_7.jpeg_top",
        "jpeg_top_copyB_11_DRUM_7.jpeg_top",
        "jpeg_top_copyB_12_DRUM_8.jpeg_top",
        "jpeg_top_trunc0_12_DRUM_8.jpeg_top",
        "jpeg_top_trunc1_12_DRUM_8.jpeg_top",
        "jpeg_top_copyB_11_DRUM_8.jpeg_top",
        "jpeg_top_trunc0_11_DRUM_8.jpeg_top",
        "jpeg_top_trunc0_9_DRUM_8.jpeg_top",
        "jpeg_top_copyB_9_DRUM_8.jpeg_top",
        "jpeg_top_trunc1_9_DRUM_8.jpeg_top",
        "jpeg_top_trunc1_8_DRUM_8.jpeg_top",
        ]

    for ckt_name in ckt_list:
        ckt = importlib.import_module(f"{base}.{ckt_name}")
        testbench_run(ckt=ckt, results_filename="results_pareto.csv")
