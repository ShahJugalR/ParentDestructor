#include "Banana.h"

Banana::Banana()
{
	calories = 200;
}

Banana::~Banana()
{
	std::cout << "\nInside Banana destructor";
}