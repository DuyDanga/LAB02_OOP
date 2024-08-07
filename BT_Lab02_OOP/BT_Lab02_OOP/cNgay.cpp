#include "cNgay.h"

#include <iostream>
using namespace std;

// Kiểm tra xem một năm có phải năm nhuận không
bool NgayThangNam::LaNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Số ngày trong mỗi tháng
int NgayThangNam::SoNgayTrongThang(int thang, int nam) {
    switch (thang) {
    case 4: case 6: case 9: case 11: return 30;
    case 2: return LaNamNhuan(nam) ? 29 : 28;
    default: return 31;
    }
}

// Hàm nhập ngày tháng năm
void NgayThangNam::Nhap() {
    cout << "Nhap ngay: ";
    cin >> iNgay;
    cout << "Nhap thang: ";
    cin >> iThang;
    cout << "Nhap nam: ";
    cin >> iNam;
}

// Hàm xuất ngày tháng năm
void NgayThangNam::Xuat() {
    cout << "Ngay thang nam: " << iNgay << "/" << iThang << "/" << iNam << endl;
}

// Hàm tính ngày tháng năm tiếp theo
void NgayThangNam::NgayThangTiepTheo() {
    iNgay++;
    if (iNgay > SoNgayTrongThang(iThang, iNam)) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
}
