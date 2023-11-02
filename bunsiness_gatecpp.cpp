#include <iostream>
#include "Knight.h"
#include "business_gate.h"
#include "Gate.h"
using namespace std;
void business_gate:: Nhap() {
	cout << "---> Nhap don gia: ";
	cin >> don_gia;
	cout << "---> Nhap so luong hang: ";
	cin >> so_hang;
}
int business_gate:: tra_ve() {
	return don_gia * so_hang;
}
bool business_gate:: passGate(Knight& A, Gate& B, int i)  {
	A.so_tien -= tra_ve();
	if (A.lay_Tien() < 0) {
		cout << "---> Hoang tu da thua o cong thu " << i + 1 << ":)))))" << endl;
		cout << "                          ========== GAME OVER ========";
		system("pause");
		return false;
	}
	else {
		cout << "                          Hoang tu da vuot cong giao thuong thanh cong !!!" << endl;
		cout << "- Thong so hien tai: ";
		A.Xuat();
		return true;
	}
}