import os
import openpyxl

def write_to_spreadsheet(results, sheet_name, start_row):
	wb = openpyxl.load_workbook('../../NS-Allgather-MVAPICH.xlsx')
	
	
	sheet = wb[sheet_name]
	# print(len(results), [len(x) for x in results], sheet_name, start_row)
	columns = ['B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L']
	for i in range(min([len(results), 11])):
		for j in range(len(results[i])):
			sheet[columns[i] + str(j + start_row)].value = results[i][j]
		

	wb.save('../../NS-Allgather-MVAPICH.xlsx')


def read_file(path):
	with open(path) as file:
		results = []
		sub_result = []
		idx = -1
		for line in file:
			if line.startswith("# Size"):
				
				idx = 0
				
			elif idx>=0:
				sub_result.append(float(line.strip().split()[1]))
				idx+=1

			if idx == 14:
				results.append(sub_result)
				sub_result = []
				idx = -1


	return results

if __name__ == '__main__':
	start_rows = {}
	start_rows['out_7_91'] = 13
	start_rows['out_c_7_91'] = 42
	start_rows['out_8_128'] = 71
	start_rows['out_c_8_128'] = 100
	
	

	sheet_name = input('enter Sheet name: ')

	with os.scandir(".") as it:
		for entry in it:
			if (entry.name.startswith('clean_')) and entry.name.endswith(".txt"):
				results = read_file(entry.path)

				write_to_spreadsheet(results, sheet_name, start_rows[entry.name[6:-4]])


