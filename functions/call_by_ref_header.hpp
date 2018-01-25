/*The header file for main.cpp*/

/*Put your functions here. 
**The grader will use this file to check your work. 
*/
#include <iostream>

void printEquation(float m1, float m2, char operation, float result);

float calculate(float &m1, float &m2, char operation, float &result);

void printEquation(float m1, float m2, char operation, float result)
{
    std::cout<<m1<<operation<<m2<<" = "<<result;
}

float calculate(float &m1, float &m2, char operation, float &result)
{
    if (operation == '+')
    {
        result = m1 + m2;
        return result;
    }
    else if (operation == '-')
    {
        result = m1 - m2;
        return result;
    }
    else if (operation == '*')
    {
        result = m1 * m2;
        return result;
    }
    else if (operation == '/')
    {
        result = m1 / m2;
        return result;
    }
}