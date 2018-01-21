#include <iostream>

using namespace std;

int main()
{
    int num;
    float sum_total = 0; 
    
    for (int i=0; i<5; i++)
    {
        cout<<"Enter number "<< i+1 << ": ";
        cin >> num;
        sum_total += num;
        cout << "\n";
    }
    cout << "SUM: " << sum_total << "\n";
    cout << "AVG: " << sum_total / 5.0 << "\n";

}