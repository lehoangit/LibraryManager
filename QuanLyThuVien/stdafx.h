#pragma once
#include "Menu.h"
#include "DocGia.h"
#include "Sach.h"
#include "Phieu.h"

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#define SOLUONGTOIDA 50
#define SACHMUONTOIDA 5


// các hàm lấy ngày tháng năm
//  hàm truyền vào chuỗi ngày và trả ra giá trị ngày tháng năm tương ứng
int getDay(char date[]);
int getMonth(char date[]);
int getYear(char date[]);

// So sánh 2 ngày với nhau
// Tham số: 
//	ngay1: ngày thứ 1 : string
//	ngay2: ngày thứ 2 : string
// Nếu:
//	ngày 1 > ngày 2 return  1
//	ngày 1 = ngày 2 return  0
//	ngày 1 < ngày 2 return -1
int ngaycmp(char ngay1[], char ngay2[]);

