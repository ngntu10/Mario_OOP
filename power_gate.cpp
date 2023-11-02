#include <iostream>
#include "Knight.h"
#include "Gate.h"
#include "power_gate.h"
using namespace  std;
void power_gate:: Nhap()  {
	cout << "---> Nhap suc manh dung si: ";
	cin >> suc_manh;
}
int power_gate::tra_ve() {
	return suc_manh;
}
bool power_gate:: passGate(Knight& A, Gate& B, int i) {
	A.suc_manh -= B.tra_ve();
	if (A.lay_suc_manh() < 0) {
		cout << "                 ------> Hoang tu da thua o cong thu " << i + 1 << ":(((((" << endl;
		cout << "                                 ========== GAME OVER ========";
		system("pause");
		return false;
	}
	else {
		cout << "                          Hoang tu da vuot cong suc manh thanh cong !!!" << endl;
		cout << "- Thong so hien tai : ";
		A.Xuat();
		return true;
	}
}