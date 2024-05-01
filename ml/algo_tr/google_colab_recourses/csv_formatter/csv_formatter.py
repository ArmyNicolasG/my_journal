import pandas as pd

csv_path = "/path/to/dataset.csv"
new_csv = "formatted_dataset.csv"

with open(csv_path) as csv:
    for line in csv:
        with open(new_csv, 'a') as new_file:
            new_file.to_csv(line, header=False)
