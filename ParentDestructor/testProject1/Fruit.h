#pragma once 
#include <iostream>

class Fruit
{
public:
	Fruit();
	//~Fruit();       // Will Cause memory leaks reason: the child class destructor wont be called and memory statically/dynamically allocated in child class wont be handled(freed)
	virtual ~Fruit(); // Will handle memory leaks by calling child destructor before this parent destructor
private:

};