#pragma once

#include "stdafx.h"


void taoPhieuMuon(); // tạo phiếu mượn cơ bản để test

void lapPhieuMuon(); // lập 1 phiếu mượn khi độc giả mượn sách

// trả về số tiền phải đóng nếu trả sách quá hạn
int lapPhieuTra(int madocgia); // lập 1 phiếu trả sach khi độc giả đến trả

void xemDSPhieuMuon(); // xem danh sách phiếu mượn

					   
// xem danh sách doc gia tre han
int tinhTreHan();