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
	void Result_Order(bool flag); //0�̸� ��������, 1�̸� ��������
	void OrderByAscending();
	void OrderByDescending();

private:
	int* array;
	int arraySize;
};