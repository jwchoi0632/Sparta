#include "CalculatedArray.h"
#include "OrderArray.h"

int arraySize;
int* inputArray;

void UserInput()
{
	cout << "입력할 수의 총 개수를 입력해주세요 : ";
	cin >> arraySize;
	inputArray = new int[arraySize];
	
	for (int i = 0; i < arraySize; i++)
	{
		cout << i + 1 << "번째 숫자를 입력해주세요 : ";
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
	 //원본 배열이 변경되지 않게 함
	/*
	CalculatedArray* ca = new CalculatedArray(inputArray, arraySize);
	OrderArray* oa = new OrderArray(inputArray, arraySize);
	*/
	//원본 배열이 변경 됨
	
	ca->TotalSum();
	ca->TotalAverage();
	oa->Result_Order(false);
	oa->Result_Order(true);

	return 0;
}