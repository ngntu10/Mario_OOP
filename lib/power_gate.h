#pragma once
#include <iostream>
#include "Gate.h"
#include "Knight.h"
using namespace std;
// Cong suc manh 
class power_gate : public Gate {
protected:
	int suc_manh = 0;  //thuoc tinh suc manh cua dung si
public:
	//power_gate();
	void Nhap() override;
	// ham tra ve suc manh cua dung si
	int tra_ve() override;
//		return suc_manh;
//  }
	bool passGate(Knight& A, Gate& B, int i) override;
};
