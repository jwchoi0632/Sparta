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

		cout << "입력한 수의 총합은 " << totalSum << "입니다." << endl;
	}
	else
	{
		cout << "입력한 수가 없습니다.";
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
		cout << "입력한 수의 평균은 " << totalAverage << "입니다." << endl;
	}
	
	return totalAverage;
}