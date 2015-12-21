#include "stdafx.h"

// các hàm lấy ngày tháng năm
// truyeenf vào chuỗi ngày
// trả ra giá trị ngày tháng năm tương ứng với kiểu int
int getDay(char date[])
{
	char tmp[3];
	tmp[0] = date[0];
	tmp[1] = date[1];
	tmp[2] = '\0';
	return atoi(tmp);
}

int getMonth(char date[])
{
	char tmp[3];
	tmp[0] = date[3];
	tmp[1] = date[4];
	tmp[2] = '\0';
	return atoi(tmp);
}

int getYear(char date[])
{
	char tmp[5];
	tmp[0] = date[6];
	tmp[1] = date[7];
	tmp[2] = date[8];
	tmp[3] = date[9];
	tmp[4] = '\0';
	return atoi(tmp);
}

// So sánh 2 ngày với nhau
// Tham số: 
//	ngay1: ngày thứ 1 : string
//	ngay2: ngày thứ 2 : string
// Nếu:
//	ngày 1 > ngày 2 return  1
//	ngày 1 = ngày 2 return  0
//	ngày 1 < ngày 2 return -1
int ngaycmp(char ngay1[], char ngay2[])
{
	int songay = 0;
	int day1 = getDay(ngay1),
		day2 = getDay(ngay2),
		month1 = getMonth(ngay1),
		month2 = getMonth(ngay2),
		year1 = getYear(ngay1),
		year2 = getYear(ngay2);
	if (year1 > year2)
	{
		songay += (year1 - year2) * 365;
		if (month1 > month2)
			songay += (month1 - month2) * 30;
		else if (month1 < month2)
			songay += (month1 - month2) * -30;
		else if (day1 > day2)
			songay += day1 - day2;
		else if (day1 < day2)
			songay += (day1 - day2) * -1;
	}
	else if (year1 < year2)
	{
		songay += (year1 - year2) * -365;
		if (month1 > month2)
			songay += (month1 - month2) * -30;
		else if (month1 < month2)
			songay += (month1 - month2) * 30;
		else if (day1 > day2)
			songay += (day1 - day2) * -1;
		else if (day1 < day2)
			songay += day1 - day2;
	}

	if (month1 > month2)
		songay += (month1 - month2) * 30;
	else if (month1 < month2)
		songay += (month1 - month2) * -30;

	else if (day1 > day2)
		songay += day1 - day2;
	else if (day1 < day2)
		songay += (day1 - day2) * -1;

	return songay;
}