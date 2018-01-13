//
//  main.cpp
//  Basics
//
//  Created by sleeba on 1/13/18.
//  Copyright © 2018 Udacity. All rights reserved.
//

#include <iostream>
#include "iomanip"
using namespace std;

int main()
{
    // hello world ...
    int variable = 10;
    cout << "Hello World, I'm learning C++!\n";

    cout << "The variable value is: " << variable << "\n";

    // Print the sizes of different datatypes
    cout << "int size = " << sizeof(int) << endl;
    cout << "short size = " << sizeof(short) << endl;
    cout << "long size = " << sizeof(long) << endl;
    cout << "char size = " << sizeof(char) << endl;
    cout << "float size = " << sizeof(float) << endl;
    cout << "double size = " << sizeof(double) << endl;
    cout << "bool size = " << sizeof(bool) << endl;

    // Usage of Constants
    // Once defined as constant, that value can't be changed in the entire program

    const int weightGoal = 100;
    cout << "WeightGoal = " << weightGoal << "\n";
    // weightGoal = 200;
    // cout<<"WeightGoal = "<<weightGoal<<"\n";
    // This is not allowed

    // Enumerated datatypes

    // define MONTHS as having 12 possible values
    enum MONTH
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };

    // define bestMonth as a variable type MONTHS
    MONTH bestMonth;

    // assign bestMonth one of the values of MONTHS
    bestMonth = Jan;

    // now we can check the value of bestMonths just
    // like any other variable
    if (bestMonth == Jan)
    {
        cout << "Mapping of Jan is: " << Jan << "\n";
    }

    // Using iomanip

    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    std::cout << "print with set width = 10\n\n";
    std::cout << "Ints" << std::setw(10);
    std::cout << "Floats" << std::setw(10);
    std::cout << "Doubles" << std::setw(10) << "\n";

    std::cout << a;
    std::cout << std::setw(12) << b;
    std::cout << std::setw(10) << c << "\n";

    std::cout << aa;
    std::cout << std::setw(12) << bb;
    std::cout << std::setw(10) << cc << "\n";

    std::cout << aaa;
    std::cout << std::setw(12) << bbb;
    std::cout << std::setw(10) << ccc << "\n\n";

    std::cout << "print with tabs\n";
    std::cout << "Int"
              << "\tFloats"
              << "\tDoubles\n";
    std::cout << aaa << "\t" << bbb << "\t" << ccc << "\n";

    return 0;
}
