from openpyxl import load_workbook

wb = load_workbook("sample3.xlsx")
ws = wb.active

ws.insert_rows(8, 5) # 8번째 줄이 추가됨


wb.save("sample_insert_rows.xlsx")