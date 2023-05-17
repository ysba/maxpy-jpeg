import importlib
from PIL import Image

bitstream = []
bitstream_tst = []

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
            bitstream_tst.append(data32)
            bitstream.append((data32&0xff000000)>>24)
            bitstream.append((data32&0xff0000)>>16)
            bitstream.append((data32&0xff00)>>8)
            bitstream.append(data32&0xff)


def testbench_run(ckt):

    # load module
    jpeg = ckt.top()
    print(">>> testbench init", jpeg.name())

    block_size = 64

    # open test image

    ##TODO: load data from image file
    #image = Image.open("ja.tif")
    #image = Image.open("ja.bmp")
    image = Image.open("bmp_24.bmp")
    #image = Image.open("bmp_24.tif")
    #image = Image.open("snail.bmp")
    if image.mode != "RGB":
        print(">>> converting image to rgb")
        image = image.convert("RGB")
    rgb_data = list(image.getdata())
    pixel_count = len(rgb_data)

    width, height = image.size
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



    ##TEMP: get data from text file
    # fp = open("ja_raw_data.txt", "r")
    # rgb_values = fp.readlines()
    # fp.close()
    # pixel_count = len(rgb_values)


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

    #ftst = open("ja_image.txt", "w")

    for rgb in rgb_values:
        bin24 = rgb[2]*0x10000 + rgb[1]*0x100 + rgb[0]
        # rgb = rgb.replace("\n", "")
        # bin24 = int(rgb, 2)

        #ftst.write(f"{bin24:06x}\n")

        jpeg.set_data_in(bin24)
        jpeg.set_enable(1)
        if block_count == 1:
            jpeg.set_end_of_file_signal(1)
        clock_cycle(jpeg)

        data_count -= 1
        if data_count == 0:
            data_count = block_size
            clock_cycle(jpeg, 16)
            jpeg.set_enable(0)
            clock_cycle(jpeg)
            block_count -= 1

        cycle_count += 1

    # ftst.close()
    # exit(0)


    jpeg.set_enable(0)
    clock_cycle(jpeg)

    print(">>> loop end")


    while True:
        clock_cycle(jpeg)
        if jpeg.get_eof_data_partial_ready() == 1:
            break


    print(">>> bitstream len", len(bitstream))

    with open("out.txt", "w") as fout:
        for data in bitstream_tst:
            fout.write(f"{data:08x}\n")



    with open("jpeg_base.bin", "rb") as fbase, open("testbench_out.jpg", "wb") as fout:
        # bitstream.append(0x3f)
        # bitstream.append(0x21)
        # bitstream.append(0xc5)
        # bitstream.append(0x00)
        bitstream.append(0xff)
        bitstream.append(0xd9)
        header = fbase.read()
        fout.write(header)
        fout.write(bytes(bitstream))


    print(">>> testbench end")



if __name__ == "__main__":
    ckt_list = [
        "jpeg_top.jpeg_top",
        ]
    for ckt_name in ckt_list:
        ckt = importlib.import_module(ckt_name)
        testbench_run(ckt)
