#include <iostream>

using namespace std;

void Increment(int a)
{
    a = a + 1;
    cout << "Address of variable a in Increment function is : " << &a<<"\n";
}

int main()
{
    int a;
    a = 10;
    Increment(a);
    cout << "Address of variable a in main function is : " << &a<<"\n";
    return 0;
}