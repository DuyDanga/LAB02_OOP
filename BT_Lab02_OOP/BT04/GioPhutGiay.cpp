#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

// Hàm nhập giờ, phút, giây
void GioPhutGiay::Nhap() {
    cout << "Nhap gio: ";
    cin >> iGio;
    if (iGio < 0 || iGio >= 24) {
        cerr << "Gio khong hop le. Vui long nhap lai." << endl;
        return;
    }

    cout << "Nhap phut: ";
    cin >> iPhut;
    if (iPhut < 0 || iPhut >= 60) {
        cerr << "Phut khong hop le. Vui long nhap lai." << endl;
        return;
    }

    cout << "Nhap giay: ";
    cin >> iGiay;
    if (iGiay < 0 || iGiay >= 60) {
        cerr << "Giay khong hop le. Vui long nhap lai." << endl;
        return;
    }
}

// Hàm xuất giờ, phút, giây
void GioPhutGiay::Xuat() {
    cout << "Gio phut giay: " << iGio << ":" << iPhut << ":" << iGiay << endl;
}

// Hàm tính cộng thêm một giây
void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++;
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;
            if (iGio >= 24) {
                iGio = 0;
            }
        }
    }
}
