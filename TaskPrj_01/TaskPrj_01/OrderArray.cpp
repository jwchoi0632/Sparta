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
			cout << "�������� ���� : ";
		}
		else
		{
			OrderByDescending();
			cout << "�������� ���� : ";
		}

		for (int i = 0; i < arraySize; i++)
		{
			cout << array[i] << " ";

			if (i == arraySize - 1) cout << endl;
		}
	}
	else cout << "�����ϱ⿣ �Է��� ���� �ʹ� �����ϴ�." << endl;
}