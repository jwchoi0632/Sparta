#include "CalculatedArray.h"
#include "OrderArray.h"

int arraySize;
int* inputArray;

void UserInput()
{
	cout << "�Է��� ���� �� ������ �Է����ּ��� : ";
	cin >> arraySize;
	inputArray = new int[arraySize];
	
	for (int i = 0; i < arraySize; i++)
	{
		cout << i + 1 << "��° ���ڸ� �Է����ּ��� : ";
		cin >> inputArray[i];
	}
}

int main()
{
	UserInput();
	
	int* array = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		array[i] = inputArray[i];
	}

	CalculatedArray* ca = new CalculatedArray(array, arraySize);
	OrderArray* oa = new OrderArray(array, arraySize);
	 //���� �迭�� ������� �ʰ� ��
	/*
	CalculatedArray* ca = new CalculatedArray(inputArray, arraySize);
	OrderArray* oa = new OrderArray(inputArray, arraySize);
	*/
	//���� �迭�� ���� ��
	
	ca->TotalSum();
	ca->TotalAverage();
	oa->Result_Order(false);
	oa->Result_Order(true);

	return 0;
}