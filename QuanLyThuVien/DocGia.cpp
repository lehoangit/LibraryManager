#include "DocGia.h"

int MaDocGia[SOLUONGTOIDA]; // ma duy nhat phan biet voi cac doc gia khac
char HoTen[SOLUONGTOIDA][50]; // ho ten day du cua doc gia
char CMND[SOLUONGTOIDA][10]; // so cmnd cua doc gia do k duoc trung voi nguoi khac
char NamSinh[SOLUONGTOIDA][11]; // ngay thang nam sinh day du cua doc gia
char GioiTinh[SOLUONGTOIDA][4]; // gioi tinh cua doc gia the hien bang "nam" hoac "nu"
char Email[SOLUONGTOIDA][50]; // Dia chi email cua doc gia
char DiaChi[SOLUONGTOIDA][50]; // Dia chi thuc su cua doc gia
char NgayLapThe[SOLUONGTOIDA][11]; // Ngay the hoat dong
char NgayHetHan[SOLUONGTOIDA][11]; // Ngay the khong con hieu luc

// tao danh sach doc gia tam thoi de test
void khoitaoDocGia() {
	MaDocGia[0] = 1;
	strcpy_s(HoTen[0], "Tran Quoc Hoa");
	strcpy_s(CMND[0], "123123123");
	strcpy_s(NamSinh[0], "22/12/2012");
	strcpy_s(GioiTinh[0], "Nam");
	strcpy_s(Email[0], "tranquochoa@gmail.com");
	strcpy_s(DiaChi[0], "57 An Duong Vuong");
	strcpy_s(NgayLapThe[0], "15/09/2000");
	strcpy_s(NgayHetHan[0], "16/11/2000");

	MaDocGia[1] = 2;
	strcpy_s(HoTen[1], "Do Minh Huy");
	strcpy_s(CMND[1], "123123122");
	strcpy_s(NamSinh[1], "22/12/2012");
	strcpy_s(GioiTinh[1], "Nam");
	strcpy_s(Email[1], "dominhhuy@gmail.com");
	strcpy_s(DiaChi[1], "57 An Duong Vuong");
	strcpy_s(NgayLapThe[1], "15/09/2000");
	strcpy_s(NgayHetHan[1], "16/11/2000");
}

int demDocGia()// thống kê số lượng độc giả
{
	int dem = 0;
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (MaDocGia[i] != 0)
		{
			dem++;
		}
	}
	return dem;
}

void thongkeDocGiaTheoGioiTinh()// thống kê độc giả theo giới tính
{
	int nam = 0, nu = 0;
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (MaDocGia[i] != 0 && strcmp(GioiTinh[i], "Nam") == 0)
			nam++;
		else if(MaDocGia[i] != 0 && strcmp(GioiTinh[i], "Nu") == 0) nu++;
	}
	cout << "Nam : " << nam << endl;
	cout << "Nu  : " << nu  << endl;
}

// xem chi tiet danh sach doc gia
void xemDanhSachDocGia()
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (MaDocGia[i] != 0)
			cout
			<< "\tDoc gia " << i + 1 << " :\n"
			<< "\t - Ma doc gia        :" << MaDocGia[i] << endl
			<< "\t - Ho ten doc gia    :" << HoTen[i] << endl
			<< "\t - So CMND           :" << CMND[i] << endl
			<< "\t - Ngay sinh         :" << NamSinh[i] << endl
			<< "\t - Gioi tinh         :" << GioiTinh[i] << endl
			<< "\t - Thu dien tu(Email):" << Email[i] << endl
			<< "\t - Dia chi nha       :" << DiaChi[i] << endl
			<< "\t - Ngay lap the      :" << NgayLapThe[i] << endl
			<< "\t - Ngay hen han      :" << NgayHetHan[i] << endl;
	}
}



// them doc gia moi vao chuong trinh
void themDocGia()
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (MaDocGia[i] == 0)
		{
			cout << "Ma doc gia: "; cin >> MaDocGia[i];

			// thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
			cout << "Nhap ten doc gia: ";
			cin.ignore();
			cin >> HoTen[i];

			cout << "CMND: ";
			cin.ignore();
			cin >> CMND[i];

			cout << "Ngay thang nam sinh: ";
			cin.ignore();
			cin >> NamSinh[i];

			cout << "Gioi tinh: ";
			cin.ignore();
			cin >> GioiTinh[i];

			cout << "Email: ";
			cin.ignore();
			cin >> Email[i];

			cout << "Dia chi: ";
			cin.ignore();
			cin >> DiaChi[i];

			cout << "Ngay lap the: ";
			cin.ignore();
			cin >> NgayLapThe[i];

			cout << "Ngay het han: ";
			cin.ignore();
			cin >> NgayHetHan[i];
			break;
		}
	}

}

// xoa doc gia
// id la ma doc gia duoc truyen vao de xoa 
void xoaDocGia(int id)
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (MaDocGia[i] == id) {
			MaDocGia[i] = 0;
			break; // thoat khoi lenh xoa neu da xoa duoc 1 doc gia
		}
	}
}

// sua thong tin doc gia, id la ma doc gia
void suaDocGia(int id)
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (MaDocGia[i] == id)
		{
			cout << "\n\tThong tin doc gia can sua:\n";
			// xuat thong tin doc gia dang chon!
			cout
				<< "\t - Ma doc gia        :" << MaDocGia[i] << endl
				<< "\t - Ho ten doc gia    :" << HoTen[i] << endl
				<< "\t - So CMND           :" << CMND[i] << endl
				<< "\t - Ngay sinh         :" << NamSinh[i] << endl
				<< "\t - Gioi tinh         :" << GioiTinh[i] << endl
				<< "\t - Thu dien tu(Email):" << Email[i] << endl
				<< "\t - Dia chi nha       :" << DiaChi[i] << endl
				<< "\t - Ngay lap the      :" << NgayLapThe[i] << endl
				<< "\t - Ngay hen han      :" << NgayHetHan[i] << endl;

			// sua thong tin

			cout << "Ma doc gia: "; cin >> MaDocGia[i];

			// thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
			cout << "Nhap ten doc gia: ";
			cin.ignore();
			cin >> HoTen[i];

			cout << "CMND: ";
			cin.ignore();
			cin >> CMND[i];

			cout << "Ngay thang nam sinh: ";
			cin.ignore();
			cin >> NamSinh[i];

			cout << "Gioi tinh: ";
			cin.ignore();
			cin >> GioiTinh[i];

			cout << "Email: ";
			cin.ignore();
			cin >> Email[i];

			cout << "Dia chi: ";
			cin.ignore();
			cin >> DiaChi[i];

			cout << "Ngay lap the: ";
			cin.ignore();
			cin >> NgayLapThe[i];

			cout << "Ngay het han: ";
			cin.ignore();
			cin >> NgayHetHan[i];

			break; // thoat khoi vong for neu sua xong thong tin doc gia
		}
	}

}

// tim kiem doc gia theo so CMND, neu tim duoc thi xuat ra man hinh
// va return true, neu k tim thay ai thi return false
bool timDocGiaTheoCMND(char soCMND[])
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (strcmp(CMND[i], soCMND) == 0)
		{
			cout << "\n\tThong tin doc gia tim duoc:\n";
			// xuat thong tin doc gia dang chon!
			cout
				<< "\t - Ma doc gia        :" << MaDocGia[i] << endl
				<< "\t - Ho ten doc gia    :" << HoTen[i] << endl
				<< "\t - So CMND           :" << CMND[i] << endl
				<< "\t - Ngay sinh         :" << NamSinh[i] << endl
				<< "\t - Gioi tinh         :" << GioiTinh[i] << endl
				<< "\t - Thu dien tu(Email):" << Email[i] << endl
				<< "\t - Dia chi nha       :" << DiaChi[i] << endl
				<< "\t - Ngay lap the      :" << NgayLapThe[i] << endl
				<< "\t - Ngay hen han      :" << NgayHetHan[i] << endl;
			return true;
		}
	}
	return false;
}


// tim kiem doc gia theo Ho ten, neu tim duoc thi xuat ra man hinh
// va return true, neu k tim thay ai thi return false
bool timDocGiaTheoHoTen(char HoTenDocGia[])
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (strcmp(HoTen[i], HoTenDocGia) == 0)
		{
			cout << "\n\tThong tin doc gia tim duoc:\n";
			// xuat thong tin doc gia dang chon!
			cout
				<< "\t - Ma doc gia        :" << MaDocGia[i] << endl
				<< "\t - Ho ten doc gia    :" << HoTen[i] << endl
				<< "\t - So CMND           :" << CMND[i] << endl
				<< "\t - Ngay sinh         :" << NamSinh[i] << endl
				<< "\t - Gioi tinh         :" << GioiTinh[i] << endl
				<< "\t - Thu dien tu(Email):" << Email[i] << endl
				<< "\t - Dia chi nha       :" << DiaChi[i] << endl
				<< "\t - Ngay lap the      :" << NgayLapThe[i] << endl
				<< "\t - Ngay hen han      :" << NgayHetHan[i] << endl;
			return true;
		}
	}
	return false;
}
