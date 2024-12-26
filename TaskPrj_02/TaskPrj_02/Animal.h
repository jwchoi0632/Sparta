#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal();
	~Animal();
	virtual void MakeSound() = 0;

private:

};

class Dog : public Animal
{
public:
	void MakeSound();
};

class Cat : public Animal
{
public:
	void MakeSound();
};

class Cow : public Animal
{
public:
	void MakeSound();
};