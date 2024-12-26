#include "CalculatedArray.h"

int CalculatedArray::TotalSum()
{
	int totalSum = 0;

	if (inputSize > 0)
	{
		for (int i = 0; i < inputSize; i++)
		{
			totalSum += array[i];
		}

		cout << "�Է��� ���� ������ " << totalSum << "�Դϴ�." << endl;
	}
	else
	{
		cout << "�Է��� ���� �����ϴ�.";
	}
	return totalSum;
}

double CalculatedArray::TotalAverage()
{
	int totalSum = 0;
	double totalAverage = 0.0;

	if (inputSize > 0)
	{
		for (int i = 0; i < inputSize; i++)
		{
			totalSum += array[i];
		}

		totalAverage = (double)totalSum / inputSize;
		cout << "�Է��� ���� ����� " << totalAverage << "�Դϴ�." << endl;
	}
	
	return totalAverage;
}