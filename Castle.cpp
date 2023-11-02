#include "Castle.h"
#include "Gate.h"
#include "power_gate.h"
#include "academic_gate.h"
#include "business_gate.h"
#include "power_gate.h"
#include <iostream>
using namespace std;
void Castle:: TaoDanhSachCong() {
	cout << "Nhap so luong cong: ";
	cin >> soLuong;
	Cong.resize(soLuong); // thay doi kich thuoc cua vector bang dung voi so luong cong

	for (int i = 0; i < soLuong; i++) {
		cout << "1. Cong giao thuong " << endl;
		cout << "2. Cong hoc thuat" << endl;
		cout << "3. Cong suc manh" << endl;
		cout << "- Nhap loai cong (1, 2 hoac 3): ";
		int type;
		cin >> type;

		if (type == 1) {
			Cong[i] = new business_gate();
			Cong[i]->Nhap();
		}
		else if (type == 2) {
			Cong[i] = new academic_gate();
			Cong[i]->Nhap();
		}
		else if (type == 3) {
			Cong[i] = new power_gate();
			Cong[i]->Nhap();
		}
	}
}
Castle:: ~Castle() {
	for (int i = 0; i < soLuong; i++) {
		delete Cong[i];
	}
}