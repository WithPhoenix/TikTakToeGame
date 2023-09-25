#include "Matrix.h"

Matrix::Matrix(unsigned int x,unsigned int y) {
	this->xSize = x;
	this->ySize = y;
	this->array = new State[x * y];
}

Matrix::~Matrix() {
	delete[] this->array;
}


State& Matrix::func_1(unsigned int x,unsigned int y) {
	if (x > this->xSize || y > this->ySize) {
		throw std::out_of_range("out of range");
	}
	return this->array[x * this->xSize + y];
}