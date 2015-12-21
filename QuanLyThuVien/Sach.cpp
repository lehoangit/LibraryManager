#include "Sach.h"


int ISBN[SOLUONGTOIDA]; // ma duy nhat phan biet voi sách khác
char TenSach[SOLUONGTOIDA][50]; // Tên đầy đủ của sách
char TenTacGia[SOLUONGTOIDA][50]; // Tên tác giả
char NhaXuatBan[SOLUONGTOIDA][50]; // Tên nhà xuất bản
char NamXuatBan[SOLUONGTOIDA][5]; // Năm xuất bản của sách
char TheLoai[SOLUONGTOIDA][20]; // Thể loại của sách
char GiaSach[SOLUONGTOIDA][50]; // Giá của sách
int SoQuyenSach[SOLUONGTOIDA]; // Số lượng sách trong thư viện

// khởi tạo sách trên chương trình để thực thi
void khoitaoSach()
{
	ISBN[0] = 1;
	strcpy_s(TenSach[0], "C++ can ban");
	strcpy_s(TenTacGia[0], "Luu Trai");
	strcpy_s(NhaXuatBan[0], "laptrinhaz.com");
	strcpy_s(NamXuatBan[0], "2014");
	strcpy_s(TheLoai[0], "Tin hoc");
	strcpy_s(GiaSach[0], "210000");
	SoQuyenSach[0] = 100;

	ISBN[1] = 2;
	strcpy_s(TenSach[1], "VPS can ban");
	strcpy_s(TenTacGia[1], "Luu Trai");
	strcpy_s(NhaXuatBan[1], "laptrinhaz.com");
	strcpy_s(NamXuatBan[1], "2015");
	strcpy_s(TheLoai[1], "Tin hoc");
	strcpy_s(GiaSach[1], "223000");
	SoQuyenSach[1] = 200;

	ISBN[2] = 3;
	strcpy_s(TenSach[2], "C++ nang cao");
	strcpy_s(TenTacGia[2], "Luu Trai");
	strcpy_s(NhaXuatBan[2], "laptrinhaz.com");
	strcpy_s(NamXuatBan[2], "2015");
	strcpy_s(TheLoai[2], "Tin hoc");
	strcpy_s(GiaSach[2], "250000");
	SoQuyenSach[2] = 500;
}

int demSach()// đếm số lượng sách trong thư viện!
{
	int dem = 0;
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (ISBN[i] != 0)
		{
			dem = dem + 1 + SoQuyenSach[i];
			cout << SoQuyenSach[i] << " - " << TenSach[i] << endl;
		}
	}
	return dem;
}

int denSach(int id)// hàm tính số tiền sach phải đền nếu mất
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (ISBN[i] == id)
		{
			return 2 * atoi(GiaSach[i]);
		}
	}
}

void thongkeTheLoai()// thống kê sách theo thể loại
{
	int id[SOLUONGTOIDA];
	char theloai[SOLUONGTOIDA][20];
	int soluong[SOLUONGTOIDA];

	bool flag = false; // ddasnh dau neu the loai chua co trong dnah sach
	// lấy danh sách thể loại
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		for (int j = 0; j < SOLUONGTOIDA; i++)
		{
			if (ISBN[0] != 0)
				if (strcmp(TheLoai[i], theloai[j]) == 0)
				{
					id[j] = j + 1;
					soluong[j] += SoQuyenSach[i];
					flag = true;
				}
				else flag = false;
		}
		if (flag == false)
			for (int j = 0; j < SOLUONGTOIDA; i++)
			{
				if (id[j] != 0)
				{
					strcpy_s(theloai[j], TheLoai[i]);
				}
			}
	}

	// xem danh sach the loai va so luong sach
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (id[i] != 0)
		{
			cout << theloai[i] << " - " << soluong[i] << endl;
		}
	}
}

void xemSach()// xem chi tiet danh sach sách trong thư viện
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (ISBN[i] != 0)
			cout
			<< "\tQuyen sach thu " << i + 1 << " :\n"
			<< "\t - ISBN         : " << ISBN[i] << endl
			<< "\t - Ten sach     : " << TenSach[i] << endl
			<< "\t - Ten tac gia  : " << TenTacGia[i] << endl
			<< "\t - Nha xuat ban : " << NhaXuatBan[i] << endl
			<< "\t - Nam xuat ban : " << NamXuatBan[i] << endl
			<< "\t - The loai     : " << TheLoai[i] << endl
			<< "\t - Gia sach     : " << GiaSach[i] << endl
			<< "\t - So luong sach: " << SoQuyenSach[i] << endl;
	}
}

void themSach()// them sách mới vao chuong trinh
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (ISBN[i] == 0)
		{
			cout << "ISBN(ma sach): "; cin >> ISBN[i];

			// thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
			cout << "Ten sach: ";
			cin.ignore();
			cin >> TenSach[i];

			cout << "Ten tac gia: ";
			cin.ignore();
			cin >> TenTacGia[i];

			cout << "Nha xuat ban: ";
			cin.ignore();
			cin >> NhaXuatBan[i];

			cout << "Nam xuat ban: ";
			cin.ignore();
			cin >> NamXuatBan[i];

			cout << "The loai: ";
			cin.ignore();
			cin >> TheLoai[i];

			cout << "Gia sach: ";
			cin.ignore();
			cin >> GiaSach[i];

			cout << "So luong: ";
			cin >> SoQuyenSach[i];
			break;
		}
	}
}

void xoaSach(int id)
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (ISBN[i] == id) {
			ISBN[i] = 0;
			break; // thoat khoi lenh xoa neu da xoa duoc sach
		}
	}
}

void suaSach(int id)
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (ISBN[i] == id)
		{
			cout << "\n\tThong tin sach can sua:\n";
			// xuat thong tin sach dang chon!
			cout
				<< "\tQuyen sach thu " << i + 1 << " :\n"
				<< "\t - ISBN         : " << ISBN[i] << endl
				<< "\t - Ten sach     : " << TenSach[i] << endl
				<< "\t - Ten tac gia  : " << TenTacGia[i] << endl
				<< "\t - Nha xuat ban : " << NhaXuatBan[i] << endl
				<< "\t - Nam xuat ban : " << NamXuatBan[i] << endl
				<< "\t - The loai     : " << TheLoai[i] << endl
				<< "\t - Gia sach     : " << GiaSach[i] << endl
				<< "\t - So luong sach: " << SoQuyenSach[i] << endl;

			// sua thong tin

			cout << "ISBN(ma sach): "; cin >> ISBN[i];

			// thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
			cout << "Ten sach: ";
			cin.ignore();
			cin >> TenSach[i];

			cout << "Ten tac gia: ";
			cin.ignore();
			cin >> TenTacGia[i];

			cout << "Nha xuat ban: ";
			cin.ignore();
			cin >> NhaXuatBan[i];

			cout << "Nam xuat ban: ";
			cin.ignore();
			cin >> NamXuatBan[i];

			cout << "The loai: ";
			cin.ignore();
			cin >> TheLoai[i];

			cout << "Gia sach: ";
			cin.ignore();
			cin >> GiaSach[i];

			cout << "So luong: ";
			cin >> SoQuyenSach[i];

			break; // thoat khoi vong for neu sua xong thong tin doc gia
		}
	}
}

bool timSachISBN(int masach)
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (ISBN[i] == masach)
		{
			cout << "\n\tThong tin sach tim duoc:\n";
			// xuat thong tin doc gia dang chon!
			cout
				<< "\tQuyen sach thu " << i + 1 << " :\n"
				<< "\t - ISBN         : " << ISBN[i] << endl
				<< "\t - Ten sach     : " << TenSach[i] << endl
				<< "\t - Ten tac gia  : " << TenTacGia[i] << endl
				<< "\t - Nha xuat ban : " << NhaXuatBan[i] << endl
				<< "\t - Nam xuat ban : " << NamXuatBan[i] << endl
				<< "\t - The loai     : " << TheLoai[i] << endl
				<< "\t - Gia sach     : " << GiaSach[i] << endl
				<< "\t - So luong sach: " << SoQuyenSach[i] << endl;
			return true;
		}
	}
	return false;
}

bool timSachTenSach(char tensach[])
{
	for (int i = 0; i < SOLUONGTOIDA; i++)
	{
		if (strcmp(TenSach[i], tensach))
		{
			cout << "\n\tThong tin sach tim duoc:\n";
			// xuat thong tin doc gia dang chon!
			cout
				<< "\tQuyen sach thu " << i + 1 << " :\n"
				<< "\t - ISBN         : " << ISBN[i] << endl
				<< "\t - Ten sach     : " << TenSach[i] << endl
				<< "\t - Ten tac gia  : " << TenTacGia[i] << endl
				<< "\t - Nha xuat ban : " << NhaXuatBan[i] << endl
				<< "\t - Nam xuat ban : " << NamXuatBan[i] << endl
				<< "\t - The loai     : " << TheLoai[i] << endl
				<< "\t - Gia sach     : " << GiaSach[i] << endl
				<< "\t - So luong sach: " << SoQuyenSach[i] << endl;
			return true;
		}
	}
	return false;
}