#pragma once
#ifndef TIKTAKTOE_H
#define TIKTAKTOE_H

#include "Matrix.h"

class TikTakToe
{
private:
	Matrix* field;
	State active;
	bool ro;

	void row(State, unsigned int, unsigned int);

public:
	TikTakToe();
	~TikTakToe();

	void fn_1();
	void set(unsigned int,unsigned int, State);
	bool next(unsigned int,unsigned int);
	void print();
	bool hasRow();
	State& getActive();
};

#endif // !TIKTAKTOE_H



