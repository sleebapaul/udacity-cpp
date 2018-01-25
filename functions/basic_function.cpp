#include <iostream>

using namespace std;

void printHello();

int printProduct(int m1, int m2, int product);

void printHello()
{
    cout << "Hello World :)\n";
}

int printProduct(int m1, int m2, int product)
{
    product = m1 * m2;
    cout << m1 << "*" << m2 << " = " << product;
}

int main()
{
    printHello();

    int m1 = 5, m2 = 6, product;

    printProduct(m1, m2, product);

    return 0;
}