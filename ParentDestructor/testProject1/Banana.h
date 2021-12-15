#pragma once 
#include "Fruit.h"
#include <iostream>

class Banana : public Fruit
{
public:
	Banana();
	~Banana();

private:
	int calories = NULL;
};