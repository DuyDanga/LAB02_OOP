#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    PhanSo ps1, ps2, ketQua;

    cout << "Nhap phan so thu nhat:\n";
    ps1.Nhap();
    ps1.RutGon();
    cout << "Phan so thu nhat sau khi rut gon: ";
    ps1.Xuat();

    cout << "Nhap phan so thu hai:\n";
    ps2.Nhap();
    ps2.RutGon();
    cout << "Phan so thu hai sau khi rut gon: ";
    ps2.Xuat();

    ketQua = ps1.Tong(ps2);
    cout << "Tong hai phan so: ";
    ketQua.Xuat();

    ketQua = ps1.Hieu(ps2);
    cout << "Hieu hai phan so: ";
    ketQua.Xuat();

    ketQua = ps1.Tich(ps2);
    cout << "Tich hai phan so: ";
    ketQua.Xuat();

    ketQua = ps1.Thuong(ps2);
    cout << "Thuong hai phan so: ";
    ketQua.Xuat();

    int soSanh = ps1.SoSanh(ps2);
    if (soSanh == 1) {
        cout << "Phan so thu nhat lon hon phan so thu hai.\n";
    }
    else if (soSanh == -1) {
        cout << "Phan so thu nhat nho hon phan so thu hai.\n";
    }
    else {
        cout << "Hai phan so bang nhau.\n";
    }

    return 0;
}
