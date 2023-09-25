#include <iostream>
#include "TikTakToe.h"
#include<stdexcept>

TikTakToe::TikTakToe() {
	this->ro = false;
	this->active = X;
	this->field = new Matrix(3, 3);
	for (unsigned int x = 0; x < 3; x++) {
		for (unsigned int y = 0; y < 3; y++) {
			this->field->func_1(x, y) = NONE;
		}
	}
}

TikTakToe::~TikTakToe() {
	delete this->field;
}

bool TikTakToe::hasRow() {
	return this->ro;
}

State& TikTakToe::getActive() {
	return this->active;
}

void TikTakToe::row(State st, unsigned int x, unsigned int y) {
	int col = 0, row = 0, di = 0, rd = 0;
	for (unsigned int i = 0; i < 3; i++) {
		if (this->field->func_1(x, i) == st) {
			++col;
		}
		if (this->field->func_1(i, y) == st) {
			++col;
		}
		if (this->field->func_1(i, i) == st) {
			++di;
		}
		if (this->field->func_1(i, 3 - i + 1) == st) {
			++rd;
		}
	}
	this->ro = (col == 3 || row == 3 || di == 3 || rd == 3);
}

void TikTakToe::fn_1() {
	std::cout << "next: " << this->active << "\n";
}

void TikTakToe::set(unsigned int x,unsigned int y, State val) {
	this->field->func_1(x, y) = val;
}

bool TikTakToe::next(unsigned int x,unsigned int y) {
	State& rState = this->field->func_1(x, y);
	if (rState == NONE) {
		rState = this->active;
		this->row(rState,x,y);
		this->active = rState == X ? O : X;
		return true;
	}
	return false;
}

void TikTakToe::print() {
	using namespace std;

	cout << "game:" << "\n";

	for (unsigned int x = 0; x < 3; x++) {
		for (unsigned int y = 0; y < 3; y++) {
			switch (this->field->func_1(x, y)) {
			case X:
				cout << "X";
				break;
			case O:
				cout << "O";
				break;
			default:
				cout << "-";
			}
		}
		cout << "\n";
	}
}

