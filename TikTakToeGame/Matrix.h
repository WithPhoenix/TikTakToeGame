#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include "State.h"
#include<stdexcept>

class Matrix
{
private:
	State* array;
	unsigned int xSize;
	unsigned int ySize;

public:
	Matrix(unsigned int x,unsigned int y);
	~Matrix();

	State& func_1(unsigned int x,unsigned int y);
};

#endif // !MATRIX_H



