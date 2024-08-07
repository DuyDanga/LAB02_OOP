#pragma once

class SoPhuc {
private:
    float iThuc;
    float iAo;

public:
    void Nhap();
    void Xuat();
    SoPhuc Tong(const SoPhuc& sp);
    SoPhuc Hieu(const SoPhuc& sp);
    SoPhuc Tich(const SoPhuc& sp);
    SoPhuc Thuong(const SoPhuc& sp);
};