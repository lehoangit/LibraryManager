#include "stdafx.h"


int main()
{
	khoitaoDocGia();
	int choose;
	do {
		// xuat menu ra 
		menu();
		cout << "\tLua chon chuc nang (0->EXIT): "; cin >> choose;

		// thuc hien chuc nang nguoi dung lua chon
		switch (choose)
		{
		case 1: // quan ly doc gia
		{
			int choose1;
			do {
				menuQLDocGia();
				cout << "\t\tLua chon chuc nang (0->EXIT): "; cin >> choose1;
				switch (choose1)
				{
				case 1:// Xem danh sach doc gia trong thu vien
					xemDanhSachDocGia();
					break;
				case 2: // Them doc gia
					themDocGia();
					break;
				case 3: // Chinh sua thong tin mot doc gia
				{
					// xuat danh sach doc gia hien tai
					cout << "Danh sach doc gia hien tai:" << endl;
					xemDanhSachDocGia();
					int id;
					cout << "\n\tNhap ma doc gia de sua: "; cin >> id;
					suaDocGia(id);
				}
					break;
				case 4: // Xoa thong tin mot doc gia
				{
					int id;
					cout << "\n\tNhap ma doc gia de xoa: "; cin >> id;
					xoaDocGia(id);
					cout << "\n\tXuat danh sach doc gia:\n";
					xemDanhSachDocGia();
				}
					break;
				case 5: // Tim kiem thong tin doc gia theo CMND
				{
					char soCMND[10];
					cout << "\n\tNhap so CMND de tim: "; cin >> soCMND;
					if (!timDocGiaTheoCMND(soCMND))
						cout << "KHONG TIM DUOC\n";
				}
					break;
				case 6: // Tim kiem thong tin doc gia theo ho ten
				{
					char HoTenDocGia[10];
					cout << "\n\tNhap so CMND de tim: ";
					cin.ignore();
					cin.getline( HoTenDocGia,50);

					if (!timDocGiaTheoHoTen(HoTenDocGia))
						cout << "KHONG TIM DUOC\n";
				}
					break;
				default: // thoat
					break;
				}
			} while (choose1 != 0);
		}break;

		case 2: // quan ly sach
		{
			khoitaoSach();
			int choose2;
			do {
				menuQLSach();
				cout << "\t\tLua chon chuc nang (0->EXIT): "; cin >> choose2;
				switch (choose2)
				{
				case 1:// Xem sach trong thu vien
					xemSach();
					break;
				case 2: // Them sach
					themSach();
					break;
				case 3: // Chinh sua thong tin mot quyen sach
				{
					// xuat danh sach doc gia hien tai
					cout << "Sach hien tai:" << endl;
					xemSach();
					int id;
					cout << "\n\tNhap ma sach de sua: "; cin >> id;
					suaSach(id);
				}
					break;
				case 4: // Xoa thong tin mot quyen sach
				{
					int id;
					cout << "\n\tNhap ma sach: "; cin >> id;
					xoaDocGia(id);
					cout << "\n\tSach hien tai:\n";
					xemDanhSachDocGia();
				}
					break;
				case 5: // Tim kiem thong tin doc gia theo ISBN
				{
					int isbn;
					cout << "\n\tNhap ma sach: "; cin >> isbn;
					if (!timSachISBN(isbn))
						cout << "KHONG TIM DUOC\n";
				}
					break;
				case 6: // Tim kiem thong tin doc gia theo ten sach
				{
					char tensach[10];
					cout << "\n\tNhap ten sach: ";
					cin.ignore();
					cin.getline(tensach,SOLUONGTOIDA);
					if (!timSachTenSach(tensach))
						cout << "KHONG TIM DUOC\n";
				}
					break;
				default: // thoat
					break;
				}
			} while (choose2 != 0);
		}break;

		case 3: // lap phieu muon sach
			lapPhieuMuon();
			break;
		case 4: // lap phieu tra sach
		{
			int id;
			cout << "Sach con hay mat? (1-con/0-mat) "; cin >> id;
			if (id == 0) {
				cout << "Nhap ma sach: "; cin >> id;
				cout << "\n\tSo tien den sach = " << denSach(id);
			}
			else {
				cout << "Nhap ma doc gia: "; cin >> id;
				cout << "So tien den bu tre han " << lapPhieuTra(id);
			}
		}
			break;
		case 5: // thong ke co ban
		{
			int choose5;
			do {
				menuThongke();
				cout << "\t\tLua chon chuc nang (0->EXIT): "; cin >> choose5;
				switch (choose5)
				{
				case 1:// Thong ke so luong sach trong thu vien
					cout << "So luong sach trong thu vien: " << demSach() << endl;
					break;
				case 2: // Thong ke so luong sach theo the loai
					thongkeTheLoai();
					break;
				case 3: // Thong ke so luong doc gia
					cout << "So luong doc gia: " << demDocGia() << endl;
					break;
				case 4: // Thong ke so luong doc gia theo gioi tinh
					thongkeDocGiaTheoGioiTinh();
					break;
				case 5: // Thong ke so luong sach dang duoc muon
					xemDSPhieuMuon();
					break;
				case 6: // Thong ke danh sach doc gia tre han
					cout << "So luong doc gia tre han tra sach = " << tinhTreHan();
					break;
				default: // thoat
					break;
				}
			} while (choose5 != 0);
			
		}break;

		default: // neu nguoi dung lua chon sai chuc nang thi khong thuc hien
			choose = 0;
			break;
		}
	} while (choose != 0);


	
	system("pause");
	return 0;
}

