#include <iostream>
#include "PhanSo.h"
using namespace std;

// Hàm tính ước chung lớn nhất (UCLN)
int PhanSo::UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm nhập phân số
void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> iTu;
    cout << "Nhap mau so: ";
    cin >> iMau;
    if (iMau == 0) {
        cout << "Mau so phai khac 0. Nhap lai mau so: ";
        cin >> iMau;
    }
}

// Hàm xuất phân số
void PhanSo::Xuat() {
    cout << iTu << "/" << iMau << endl;
}

// Hàm rút gọn phân số
void PhanSo::RutGon() {
    int ucln = UCLN(iTu, iMau);
    iTu /= ucln;
    iMau /= ucln;
}

// Hàm tính tổng hai phân số
PhanSo PhanSo::Tong(const PhanSo& ps) {
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iMau + ps.iTu * iMau;
    ketQua.iMau = iMau * ps.iMau;
    ketQua.RutGon();
    return ketQua;
}

// Hàm tính hiệu hai phân số
PhanSo PhanSo::Hieu(const PhanSo& ps) {
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iMau - ps.iTu * iMau;
    ketQua.iMau = iMau * ps.iMau;
    ketQua.RutGon();
    return ketQua;
}

// Hàm tính tích hai phân số
PhanSo PhanSo::Tich(const PhanSo& ps) {
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iTu;
    ketQua.iMau = iMau * ps.iMau;
    ketQua.RutGon();
    return ketQua;
}

PhanSo PhanSo::Thuong(const PhanSo& ps) {
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iMau;
    ketQua.iMau = iMau * ps.iTu;
    ketQua.RutGon();
    return ketQua;
}

int PhanSo::SoSanh(const PhanSo& ps) {
    int a = iTu * ps.iMau;
    int b = ps.iTu * iMau;
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}
