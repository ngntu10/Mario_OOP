#include <iostream>
#include "Knight.h"
#include "academic_gate.h"
#include "Gate.h"
using namespace std;
void academic_gate:: Nhap() {
	cout << "---> Nhap tri tue cua nha hien triet: ";
	cin >> tri_tue;
}
int academic_gate :: tra_ve() {
	return tri_tue;
}
bool academic_gate :: passGate(Knight& A, Gate& B, int i)  {
	if (B.tra_ve() > A.lay_tri_tue()) { 
		cout << "---> Hoang tu da thua o cong thu " << i + 1 << ":(((((" << endl;
		cout << "                          ========== GAME OVER ========";
		system("pause");
		return false;
	}
	else {
		cout << "                          Hoang tu da vuot cong tri tue thanh cong !!!" << endl;
		cout << "- Thong so hien tai : ";
		A.Xuat();
		return true;
	}
}