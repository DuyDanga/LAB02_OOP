#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc sp1, sp2, ketqua;

    cout << "Nhap so phuc thu nhat:\n";
    sp1.Nhap();
    cout << "Nhap so phuc thu hai:\n";
    sp2.Nhap();

    cout << "So phuc thu nhat: ";
    sp1.Xuat();
    cout << "So phuc thu hai: ";
    sp2.Xuat();

    ketqua = sp1.Tong(sp2);
    cout << "Tong hai so phuc: ";
    ketqua.Xuat();

    ketqua = sp1.Hieu(sp2);
    cout << "Hieu hai so phuc: ";
    ketqua.Xuat();

    ketqua = sp1.Tich(sp2);
    cout << "Tich hai so phuc: ";
    ketqua.Xuat();

    ketqua = sp1.Thuong(sp2);
    cout << "Thuong hai so phuc: ";
    ketqua.Xuat();

    return 0;
}
