with open("ja_bits_out.txt") as fin, open("jpeg_base.bin", "rb") as fbase, open("check.jpg", "wb") as fout:
    lines = fin.readlines()
    bitstream = []
    for line in lines:
        line = line.replace("\n", "")
        val = int(line, 16)

        bitstream.append((val&0xff000000)>>24)
        bitstream.append((val&0xff0000)>>16)
        bitstream.append((val&0xff00)>>8)
        bitstream.append(val&0xff)

    bitstream.append(0xff)
    bitstream.append(0xd9)
    header = fbase.read()
    fout.write(header)
    fout.write(bytes(bitstream))


