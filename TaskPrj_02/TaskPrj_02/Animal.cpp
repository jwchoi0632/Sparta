#include "Animal.h"

Animal::Animal()
{

}

Animal::~Animal()
{

}

void Dog::MakeSound()
{
	cout << "Dog : F F F" << endl;
}

void Cat::MakeSound()
{
	cout << "Cat : meow meow" << endl;
}

void Cow::MakeSound()
{
	cout << "Cow : ummmuu" << endl;
}