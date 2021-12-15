#pragma once 
// testProject1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
#include "Fruit.h"
#include "Banana.h"

size_t memAllocated = 0;
size_t memDeAllocated = 0;
size_t memUsage = 0;
void ShowMemLeaked();
void operator delete(void* p, size_t size);
void* operator new(size_t size);

// TODO: Reference additional headers your program requires here.
