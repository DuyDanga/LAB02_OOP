#include <iostream>
#include "SoPhuc.h"
using namespace std;

// Hàm nhập số phức
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

// Hàm xuất số phức
void SoPhuc::Xuat() {
    cout << iThuc << " + " << iAo << "i" << endl;
}

// Hàm tính tổng hai số phức
SoPhuc SoPhuc::Tong(const SoPhuc& sp) {
    SoPhuc ketqua{};
    ketqua.iThuc = this->iThuc + sp.iThuc;
    ketqua.iAo = this->iAo + sp.iAo;
    return ketqua;
}

// Hàm tính hiệu hai số phức
SoPhuc SoPhuc::Hieu(const SoPhuc& sp) {
    SoPhuc ketqua;
    ketqua.iThuc = this->iThuc - sp.iThuc;
    ketqua.iAo = this->iAo - sp.iAo;
    return ketqua;
}

// Hàm tính tích hai số phức
SoPhuc SoPhuc::Tich(const SoPhuc& sp) {
    SoPhuc ketqua;
    ketqua.iThuc = this->iThuc * sp.iThuc - this->iAo * sp.iAo;
    ketqua.iAo = this->iThuc * sp.iAo + this->iAo * sp.iThuc;
    return ketqua;
}

// Hàm tính thương hai số phức
SoPhuc SoPhuc::Thuong(const SoPhuc& sp) {
    SoPhuc ketqua;
    float mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    ketqua.iThuc = (this->iThuc * sp.iThuc + this->iAo * sp.iAo) / mau;
    ketqua.iAo = (this->iAo * sp.iThuc - this->iThuc * sp.iAo) / mau;
    return ketqua;
}
