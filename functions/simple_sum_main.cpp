/*Goal: practice writing functions with parameters and return values.*/

#include "simple_sum_header.hpp"

int main()
{
    int m1 = 4;
    int m2 = 5;
    int sum_ = 0;
    sum_ = sum(m1, m2);
    printEquation(m1, m2, sum_, '+');
    return 0;
}