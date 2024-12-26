#pragma once
#include <iostream>
using namespace std;

class OrderArray
{
public:
	OrderArray(int* inputArray, int inputSize)
	{
		this->array = inputArray;
		this->arraySize = inputSize;
	}
	void Result_Order(bool flag); //0이면 오름차순, 1이면 내림차순
	void OrderByAscending();
	void OrderByDescending();

private:
	int* array;
	int arraySize;
};