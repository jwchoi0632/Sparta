#include "Zoo.h"
#include <cstdlib>
#include <ctime>

Animal* CreateRandomAnimal();

int main()
{
	Animal* testAnimals[3];
	testAnimals[0] = new Dog;
	testAnimals[1] = new Cat;
	testAnimals[2] = new Cow;

	cout << "세 종류의 동물들이 있습니다." << endl;

	for (int i = 0; i < 3; i++)
	{
		testAnimals[i]->MakeSound();
	}

	Zoo* myZoo = new Zoo();

	for (int i = 0; i < 11; i++)
	{
		myZoo->AddAnimal(CreateRandomAnimal());
	}

	myZoo->PerformActions();

	return 0;
}

Animal* CreateRandomAnimal()
{
	Animal* animal = nullptr;

	int randomIndex = rand() % 3;

	switch (randomIndex)
	{
	case 0:
		animal = new Dog;
		cout << "New dog in zoo" << endl;
		break;

	case 1:
		animal = new Cat;
		cout << "New Cat in zoo" << endl;
		break;

	case 2:
		animal = new Cow;
		cout << "New cow in zoo" << endl;
		break;
	}

	return animal;
}