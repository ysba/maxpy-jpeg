with open("jpeg_top_TB.v", "r") as input_file_handler, open("ja_testbench.txt", "w") as output_file_handler:
    lines = input_file_handler.readlines()
    count = 0
    for line in lines:
        if "data_in <= 24'b" in line:
            count += 1
            p1 = line.index("'b") + 2
            p2 = line.index(";")
            # bin24_str = line[p1:p2]
            # output_file_handler.write(f"{bin24_str}\n")
            bin24_str = int(line[p1:p2], 2)
            output_file_handler.write(f"{bin24_str:06x}\n")
    print(f"count: {count}")
