#include <iostream>
#include"cNgay.h"
using namespace std;

int main() {
    NgayThangNam date;
    date.Nhap();
    date.Xuat();
    date.NgayThangTiepTheo();
    cout << "Ngay thang nam tiep theo: ";
    date.Xuat();
    return 0;
}
