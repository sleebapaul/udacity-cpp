#include <iostream>

using namespace std;

int main()
{
    int a;
    int *p;
    a = 5;
    p = &a;
    cout << "Value of variable a: " << a << "\n";
    cout << "Address of variable a: " << &a << "\n";
    cout << "Value at pointer variable p: " << p << "\n";
    cout << "Address of pointer p: " << &p << "\n";
    cout << "Value at the address stored in pointer p (dereferencing): " << *p << "\n\n";

    cout << "Let's makes things little complex\n";
    int b = 20;
    *p = b;

    cout << "Value of variable b: " << b << "\n";
    cout << "Address of variable b: " << &b << "\n";
    cout << "Value at pointer variable p: " << p << "\n";
    cout << "Address of pointer p: " << &p << "\n";
    cout << "Value at the address stored in pointer p (dereferencing): " << *p << "\n";
    cout << "\nIf you notice, here the value stored in p is changed to 20. But it still points to `a` since p = &a"<< "\n\n";

    cout << "Let's change it in single step\n";
    int *k = &b;

    cout << "Value at pointer variable k: " << k << "\n";
    cout << "Address of pointer k: " << &k << "\n";
    cout << "Value at the address stored in pointer k (dereferencing): " << *k << "\n";

    // Pointer arithemetic

    int c = 10;
    int *s;

    s = &c;

    cout<<"Let's increment a int memory address\n";


    cout<<s<<"\n";
    cout<<s+1<<"\n";
    cout<<"As we see, the increment is an int memory size, not just 1\n";
    cout<<"Size of int variable c: "<<sizeof(c);



    return 0;
}