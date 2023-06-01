import csv

# set referemnce values
ref_area = 168134.099
ref_power = 7028.850
ref_timing = 42141.492

# open input csv data
fp_in = open("results_full.csv", "r")
csv_data = csv.reader(fp_in, delimiter=";")
data_rows = list(csv_data)
fp_in.close()


# iterate through rows and edit (skip header row)
for row in data_rows[1:]:
    area = float(row[1])
    power = float(row[2])
    timing = float(row[3])
    row[1] = f"{((1 - area/ref_area)*100):2f}"
    row[2] = f"{((1 - power/ref_power)*100):2f}"
    row[3] = f"{((1 - timing/ref_timing)*100):2f}"


# write edited data to output csv file
fp_out = open("results_savings.csv", "w")
csv_out = csv.writer(fp_out, delimiter=";")
csv_out.writerows(data_rows)

fp_out.close()