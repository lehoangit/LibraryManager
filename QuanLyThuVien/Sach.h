#pragma once
#include "stdafx.h"

// hàm chính
void xemSach();// xem chi tiet danh sach sách trong thư viện

void themSach();// them sách mới vao chuong trinh

void xoaSach(int id);// xoa sách, int id la ma sách duoc truyền 

void suaSach(int id); // sua thong tin sách, id la ma sách

// tim kiem sách theo so ISBN la tham so truyen vao, 
//neu tim duoc thi xuat ra man hinh
// va return true, neu k tim thay ai thi return false
bool timSachISBN(int masach);

// tim kiem doc gia theo Ten sach, neu tim duoc thi xuat ra man hinh
// va return true, neu k tim thay ai thi return false
bool timSachTenSach(char tensach[]);

// hàm phụ
void khoitaoSach();// tao danh sach doc gia tam thoi de test

// đếm số lượng sách trong thư viện!
int demSach();
// hàm tính số tiền sach phải đền nếu mất
int denSach(int id);
// thống kê sách theo thể loại
void thongkeTheLoai();
