# ParentDestructor
This project explains how to handle memory leak when deleting child object with parent's destructor.

Suppose you have class called fruit and you make a child class say banana. which has an additional variable which is 'calories' either statically or dynamically allocated.

You declare a Fruit Object with specific banana constructor. When de-allocation of fruit object will occur destructor of fruit will be called and hence all allocations in banana won't be de-allocated and hence memory leak will occur.

To fix this we will use virtual destructor in which Fruit destructor will be exceuted but before that own banana's destructor will de-allocate resources.
