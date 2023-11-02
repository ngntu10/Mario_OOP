#pragma once
#include <iostream>
using namespace std;
//tao class hoang tu
class Knight {
public:
	int so_tien;
	int tri_tue;
	int suc_manh;
	//Knight();
	// cac ham getter de truy xuat thuoc tinh cua hoang tu
	int lay_Tien();
	int lay_tri_tue();
	int lay_suc_manh();
	//ham nhap cac thong so cua hoang tu
	void Nhap();
	void Xuat();
};