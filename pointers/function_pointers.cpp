#include <iostream>

using namespace std;

int Add(int a, int b)
{
    return a+b;
}

void PrintHello(const char *name)
{
    cout<<"hello "<<name;
}
int main()
{
    // Pointer to function that should take
    // (int, int) as parameters/arguments 
    // return type should be also the same
    int (*p) (int, int);
    // Initialize and fill in the address of function to p
    p = &Add;
    // Or simply p = Add;

    // Let's call the function
    // We need to first dereference the function
    // Then pass the arguments
    int c;
    c = (*p) (2,3);
    // or simply c = p(2,3)
    cout<<"Sum: "<<c<<"\n";

    // Another catch here is parathesis before and after p
    // int *p (int, int)
    // This means we are declaring a function named `p` with
    // returns a pointer int

    // Another function

    void(*ptr) (const char*);
    ptr = PrintHello;
    ptr("Tom");


}