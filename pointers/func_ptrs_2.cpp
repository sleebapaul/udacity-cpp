// Use cases of func pointers

#include <iostream>

using namespace std;

void A()
{
    cout<<"Hello!\n";
}

// Here we are going to pass the func A as argument 
// to B

void B(void (*ptr)())
{
    // Callback the argument which is a function
    // Calling A indrectly through B
    ptr();
}

int main()
{
    void (*p)() = A;
    B(p);
    // Simply B(A) can do the same operations
    // A is a callback function here
    
}