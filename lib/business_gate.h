#pragma once
#include <iostream>
#include "Gate.h"
#include "Knight.h"
using namespace std;
// Cong giao thuong
class business_gate : public Gate {
protected:
	int don_gia = 0;
	int so_hang = 0;
public:
	//business_gate(); 
	// ham nhap cac thuoc tinh cua cong giao thuong
	void Nhap() override;
	// ham tinh so tien hoang tu phai tra de qua cong
	int tra_ve() override;
	// Ghi de phuong thuc passGate
	bool passGate(Knight& A, Gate& B, int i) override;
};
