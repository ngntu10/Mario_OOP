#pragma once
#include <iostream>
#include <vector>
#include "Gate.h"
#include "academic_gate.h"
#include "business_gate.h"
#include "power_gate.h"
using namespace std;

class Castle {
protected:
	int soLuong;
	vector<Gate*> Cong; // su dung vector cua con tro de luu danh sach cong
public:
	void TaoDanhSachCong();
    // ham huy de huy danh sach cong
	~Castle();
};
