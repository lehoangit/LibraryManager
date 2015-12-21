#pragma once

#include "Menu.h"

void menu() {
	cout << "\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t1 - Quan ly doc gia" << endl;
	cout << "\t2 - Quan ly sach" << endl;
	cout << "\t3 - Lap phieu muon sach" << endl;
	cout << "\t4 - Lap phieu tra sach" << endl;
	cout << "\t5 - Thong ke" << endl;
	cout << "\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
void menuQLDocGia()
{
	cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t\t1 - Xem danh sach doc gia trong thu vien" << endl;
	cout << "\t\t2 - Them doc gia" << endl;
	cout << "\t\t3 - Chinh sua thong tin mot doc gia" << endl;
	cout << "\t\t4 - Xoa thong tin mot doc gia" << endl;
	cout << "\t\t5 - Tim kiem thong tin doc gia theo CMND" << endl;
	cout << "\t\t6 - Tim kiem thong tin doc gia theo ho ten" << endl;
	cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
void menuQLSach()
{
	cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t\t1 - Xem sach trong thu vien" << endl;
	cout << "\t\t2 - Them sach" << endl;
	cout << "\t\t3 - Chinh sua thong tin mot quyen sach" << endl;
	cout << "\t\t4 - Xoa thong tin mot quyen sach" << endl;
	cout << "\t\t5 - Tim kiem thong tin doc gia theo ISBN" << endl;
	cout << "\t\t6 - Tim kiem thong tin doc gia theo ten sach" << endl;
	cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
void menuThongke()
{
	cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t\t1 - Thong ke so luong sach trong thu vien" << endl;
	cout << "\t\t2 - Thong ke so luong sach theo the loai" << endl;
	cout << "\t\t3 - Thong ke so luong doc gia" << endl;
	cout << "\t\t4 - Thong ke so luong doc gia theo gioi tinh" << endl;
	cout << "\t\t5 - Thong ke so luong sach dang duoc muon" << endl;
	cout << "\t\t6 - Thong ke danh sach doc gia tre han" << endl;
	cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
