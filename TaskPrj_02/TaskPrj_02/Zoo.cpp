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
		cout << "동물원이 가득찼습니다." << endl;
	}
	else
	{
		animals[animalCount] = animal;
		animalCount++;
	}
}

void Zoo::PerformActions()
{
	cout << "동물원의 모든 동물들이 차례대로 노래합니다." << endl;
	for (int i = 0; i < sizeof(animals) / sizeof(*animals); i++)
	{
		if (animals[i] != nullptr) animals[i]->MakeSound();
	}
}