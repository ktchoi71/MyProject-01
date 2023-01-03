from openpyxl import load_workbook

wb = load_workbook("sample_insert_rows.xlsx")

ws = wb.active

ws.delete_rows(8, 4)

wb.save("sample_insert_rows.xlsx")