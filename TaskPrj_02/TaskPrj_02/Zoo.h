#pragma once
#include <iostream>
#include "Animal.h"

using namespace std;

class Zoo
{
public:
	Zoo();
	~Zoo();
	void AddAnimal(Animal* animal);
	void PerformActions();

private:
	Animal* animals[10];
	int animalCount;
};