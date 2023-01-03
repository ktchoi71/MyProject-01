from openpyxl import Workbook

wb = Workbook()
ws = wb.active
ws.title = "MySheet" # sheet 의 이름을 변경
wb.save("sample.xlsx")
wb.close()