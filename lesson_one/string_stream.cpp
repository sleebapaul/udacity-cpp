#include <iostream>
#include <sstream>

int main()
{
    // Using the string stream for converting string inputs to 
    // variables of other datatypes

    std::string stringLength;
    float length = 0;
    float breadth = 0;

    std::cout << "Enter the length: ";
    std::getline(std::cin, stringLength);
    std::stringstream(stringLength) >> length;

    std::cout << "Enter the width: ";
    std::getline(std::cin, stringLength);
    std::stringstream(stringLength) >> breadth;

    float area = length * breadth;

    std::cout << "Area: " << area;

    // Using cin for fetching inputs without spaces

    float FTemp = 0;
    float CTemp = 0;

    std::cout << "Enter a Farenheit temperature: ";
    std::cin >> FTemp;

    CTemp = FTemp - 32 / (9 / 5);
    std::cout << "\n " << FTemp << " in Farenheit = " << CTemp << "in Celsius\n";

    return 0;
}