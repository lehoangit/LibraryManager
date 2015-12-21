#include"Phieu.h"
#include "stdafx.h"

// thông tin cơ bản của phiếu mượn sách
int DocGia[SOLUONGTOIDA]; // mã độc giả, cho biết ai là người mượn
char NgayMuon[SOLUONGTOIDA][11]; // ngày mượn sách
char NgayTraDuKien[SOLUONGTOIDA][11]; // ngày hẹn trả
char NgayTraThucTe[SOLUONGTOIDA][11]; // ngày trả thực tế
char DanhSachISBN[SOLUONGTOIDA][50]; // danh sách cho biết tất cả các sách mượn trên 1 phiếu mượn

// khởi tạo danh sách phiếu mượn tạm thời
void taoPhieuMuon()
{
	DocGia[0] = 1;
	strcpy_s(NgayMuon[0], "19/05/2011");
	strcpy_s(NgayTraDuKien[0], "26/05/2011");
	strcpy_s(NgayTraThucTe[0], "29/05/2011");
	strcpy_s(DanhSachISBN[0], "1,2,3,4,5,6");


	DocGia[1] = 2;
	strcpy_s(NgayMuon[1], "11/06/2015");
	strcpy_s(NgayTraDuKien[1], "18/06/2015");
	strcpy_s(NgayTraThucTe[1], "18/06/2015");
	strcpy_s(DanhSachISBN[1], "4,5,6,2,8,5,7");
}

// lập phiếu mượn sách
void lapPhieuMuon()
{
	cout << "Lap mot Phieu muon sach\n";
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (DocGia[i] == 0)
		{
			cout << "\tMa doc gia       : "; cin >> DocGia[i]; cout << endl;
			cout << "\tNgay muon        : "; cin >> NgayMuon[i]; cout << endl;
			cout << "\tNgay tra du kien : "; cin >> NgayTraDuKien[i]; cout << endl;
			cout << "\tDanh sach ISBN(,): "; cin >> DanhSachISBN[i]; cout << endl;
			break; //  thoát ra nếu thêm thành công 1 phiếu
		}
	}
}

// lập 1 phiếu trả 
int lapPhieuTra(int madocgia)
{
	cout << "Lap phieu tra sach\n";
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (DocGia[i] == madocgia)
		{
			cout << "\tNgay tra thuc te: "; cin >> NgayTraThucTe[i]; cout << endl;
			// tính tiền thooi
			int ngay = ngaycmp(NgayTraDuKien[i], NgayTraThucTe[i]);
			if (ngay < -7)
				ngay += 7;
			return ngay * 5;
			break; //  thoát ra nếu thêm thành công 1 phiếu
		}
	}
}

// xem danh sách phiếu mượn sách
void xemDSPhieuMuon()
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (DocGia[i] != 0)
		{
			cout << "Phieu muon thu " << i + 1 << endl
				<< "\t - " << "Ma doc gia      : " << DocGia[i] << endl
				<< "\t - " << "Ngay muon       : " << NgayMuon[i] << endl
				<< "\t - " << "Ngay tra du kien: " << NgayTraDuKien[i] << endl
				<< "\t - " << "Ngay tra thuc te: " << NgayTraThucTe[i] << endl
				<< "\t - " << "Danh sach ISBN  : " << DanhSachISBN[i] << endl;
		}
	}
}

// xem danh sách doc gia tre han
int tinhTreHan()
{
	int dem = 0;
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (DocGia[i] != 0)
		{
			if(ngaycmp(NgayTraDuKien[i], NgayTraThucTe[i]) < 0 )
				dem++;
		}
	}
	return dem;
}


