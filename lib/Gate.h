#pragma once
#include <iostream>
#include <string>
#include "Knight.h"
using namespace std;
// Class co ban
class Gate {
protected:
	int loai = 0;
public:
	//Gate();
	virtual void Nhap() = 0;
	virtual int tra_ve() = 0;
	virtual bool passGate(Knight& A, Gate& B, int i) = 0;
	int getLoai() {
		return loai;
	}
};
