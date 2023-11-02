#include <iostream>
#include <vector>
#include <string>
#include "Gate.h"
#include "academic_gate.h"
#include "business_gate.h"
#include "power_gate.h"
#include "Knight.h"
#include "Castle.h"
using namespace std;
int main() {
	cout << "                              =========== GIAI CUU CONG CHUA ===========" << endl;
	Knight knight;
	knight.Nhap();
	cout << "Hay nhap so luong cong: ";
	int soLuong;
	cin >> soLuong;
	Gate* arrGate[1000] = { nullptr };
	for (int i = 0; i < soLuong; i++) {
		cout << "1. Cong giao thuong " << endl;
		cout << "2. Cong hoc thuat" << endl;
		cout << "3. Cong suc manh" << endl;
		cout << "- Nhap loai cong (1,2 hoac 3): ";
		int type;
		cin >> type;
		if (type == 1) {
			arrGate[i] = new business_gate();
			arrGate[i]->Nhap();
			if(!arrGate[i]->passGate(knight, *arrGate[i], i)) break;
		}
		if (type == 2) {
			arrGate[i] = new academic_gate();
			arrGate[i]->Nhap();
			if (!arrGate[i]->passGate(knight, *arrGate[i], i)) break;
		}
		if (type == 3) {
			arrGate[i] = new power_gate();
			arrGate[i]->Nhap();
			if (!arrGate[i]->passGate(knight, *arrGate[i], i)) break;
		}
		if (i == soLuong - 1) {
			cout << "                      Hoang tu da giai cuu duoc cong chua !!!!" << endl;
			cout << "Thong so con lai cua hoang tu sau cuoc vien chinh: ";
			knight.Xuat();
			cout << "                                 =========== HAPPY ENDING==========";
			system("pause");
		}
	}
	for (int i = 0; i < soLuong; i++) {
		delete arrGate[i];
	}
}
