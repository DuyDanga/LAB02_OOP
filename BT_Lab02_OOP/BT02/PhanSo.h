#pragma once

class PhanSo {
private:
    int iTu;
    int iMau;

    int UCLN(int a, int b);

public:
    void Nhap();
    void Xuat();
    void RutGon();
    PhanSo Tong(const PhanSo& ps);
    PhanSo Hieu(const PhanSo& ps);
    PhanSo Tich(const PhanSo& ps);
    PhanSo Thuong(const PhanSo& ps);
    int SoSanh(const PhanSo& ps);
};
