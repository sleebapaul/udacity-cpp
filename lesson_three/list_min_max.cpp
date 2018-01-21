/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    int maxim = 0;
    int minim = 0;
    int sum_ = 0;
    for (int i = 0; i < 15; i++)
    {
        cout << "Enter the number " << i + 1 << ": ";
        cin >> number;
        cout << ("\n");
        if (i == 0)
        {
            minim = number;
            maxim = number;
        }
        if (number > maxim)
        {
            maxim = number;
        }
        else if (number < minim)
        {
            minim = number;
        }
        sum_ = sum_ + number;
    }
    cout << "Maximum: " << maxim << "\n";
    cout << "Minimum: " << minim << "\n";
    cout << "Avg: " << sum_ / 15.0 << "\n";

    return 0;
}