#include "Knight.h"
#include <iostream>
using namespace std;
int Knight:: lay_Tien() {
	return so_tien;
}
int Knight:: lay_tri_tue() {
	return tri_tue;
}
int Knight:: lay_suc_manh() {
	return suc_manh;
}
void Knight:: Nhap() {
	cout << "                                 ~~~@@@ Nhap thong so hoang tu @@@~~~" << endl;
	cout << "            ---> Nhap so tien (coin) : ";
	cin >> so_tien;
	cout << "            ---> Nhap chi so tri tue (IQ) : ";
	cin >> tri_tue;
	cout << "            ---> Nhap chi so tan cong (ATK) ";
	cin >> suc_manh;
}
void Knight:: Xuat() {
	cout << "[" << so_tien << "," << tri_tue << "," << suc_manh << "]" << endl;
}