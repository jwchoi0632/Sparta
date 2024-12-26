#include "OrderArray.h"

void OrderArray :: OrderByAscending()
{
	int temp = 0;

	for (int i = 0; i < arraySize - 1; i++)
	{
		for (int j = i + 1; j < arraySize; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void OrderArray :: OrderByDescending()
{
	int temp = 0;

	for (int i = 0; i < arraySize - 1; i++)
	{
		for (int j = i + 1; j < arraySize; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void OrderArray::Result_Order(bool flag)
{
	if (arraySize > 1)
	{
		if (flag == false)
		{
			OrderByAscending();
			cout << "오름차순 정렬 : ";
		}
		else
		{
			OrderByDescending();
			cout << "내림차순 정렬 : ";
		}

		for (int i = 0; i < arraySize; i++)
		{
			cout << array[i] << " ";

			if (i == arraySize - 1) cout << endl;
		}
	}
	else cout << "정렬하기엔 입력한 수가 너무 적습니다." << endl;
}