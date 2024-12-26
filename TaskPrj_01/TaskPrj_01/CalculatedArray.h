#pragma once
#include <iostream>
using namespace std;

class CalculatedArray 
{
public:
	CalculatedArray(int* inputArray, int size)
	{
		this->array = inputArray;
		this->inputSize = size;
	}
	int TotalSum();
	double TotalAverage();

private :
	int* array;
	int inputSize;
};