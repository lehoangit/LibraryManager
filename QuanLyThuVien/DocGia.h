#pragma once

#include "stdafx.h"

// hàm chính
void xemDanhSachDocGia();// xem chi tiet danh sach doc gia

void themDocGia();// them doc gia moi vao chuong trinh

void xoaDocGia(int id);// xoa doc gia, int id la ma doc gia duoc truyen vao de xoa 

void suaDocGia(int id); // sua thong tin doc gia, id la ma doc gia

// tim kiem doc gia theo so CMND voi soCMND la tham so truyen vao, 
//neu tim duoc thi xuat ra man hinh
// va return true, neu k tim thay ai thi return false
bool timDocGiaTheoCMND(char soCMND[]); 

// tim kiem doc gia theo Ho ten, neu tim duoc thi xuat ra man hinh
// va return true, neu k tim thay ai thi return false
bool timDocGiaTheoHoTen(char HoTenDocGia[]);

// hàm phụ
void khoitaoDocGia();// tao danh sach doc gia tam thoi de test


// thống kê số lượng độc giả
int demDocGia();

// thống kê độc giả theo giới tính
void thongkeDocGiaTheoGioiTinh();