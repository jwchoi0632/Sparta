#include "Zoo.h"

Zoo::Zoo()
{
	for (int i = 0; i < 10; i++)
	{
		animals[i] = nullptr;
	}
	animalCount = 0;
}

Zoo::~Zoo()
{
	for (int i = 0; i < sizeof(animals) / sizeof(*animals); i++)
	{
		delete animals[i];
	}
}

void Zoo::AddAnimal(Animal* animal)
{
	if (animalCount == sizeof(animals) / sizeof(*animals))
	{
		cout << "�������� ����á���ϴ�." << endl;
	}
	else
	{
		animals[animalCount] = animal;
		animalCount++;
	}
}

void Zoo::PerformActions()
{
	cout << "�������� ��� �������� ���ʴ�� �뷡�մϴ�." << endl;
	for (int i = 0; i < sizeof(animals) / sizeof(*animals); i++)
	{
		if (animals[i] != nullptr) animals[i]->MakeSound();
	}
}