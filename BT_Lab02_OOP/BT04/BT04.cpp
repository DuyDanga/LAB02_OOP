#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main() {
    GioPhutGiay time;
    time.Nhap();
    time.Xuat();
    time.TinhCongThemMotGiay();
    cout << "Gio phut giay sau khi cong them mot giay: ";
    time.Xuat();
    return 0;
}

