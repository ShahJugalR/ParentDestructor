// testProject1.cpp : Defines the entry point for the application.
//

#include "testProject1.h"

int main() {

	Fruit* banana = new Banana();

	delete banana;

	std::cin.get();

	ShowMemLeaked();

	return 0;
}

void* operator new(size_t size)
{
    std::cout << "\nAllocated " << size << "Bytes";
    //void* p = ::operator new(size);
    void * p = malloc(size); //will also work fine
	memAllocated += size;
    return p;
}

void operator delete(void* p, size_t size)
{
	std::cout << "\nDe-allocated " << size << "Bytes";
	memDeAllocated += size;
    free(p);
}

void ShowMemLeaked() {
	memUsage = memAllocated - memDeAllocated;
	std::cout << "\nMemory Leaked(in bytes) : " << memUsage;
}
