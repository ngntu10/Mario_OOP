#pragma once
#include <iostream>
#include "Gate.h"
#include "Knight.h"
using namespace std;
//Cong hoc thuat
class academic_gate : public Gate {
protected:
	int tri_tue = 0;
	// thuoc tinh dac trung cua nha hien triet 
public:
	//academic_gate();
	// hàm nhập 
	void Nhap() override;
	// ham tra ve chi so IQ cua nha hien triet
	int tra_ve()override;
	bool passGate(Knight& A, Gate& B, int i) override;
};
