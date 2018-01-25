#include <iostream>

using namespace std;

int main()
{
    int const row = 4;
    int const column = 4;

    int bigArray[row][column];
    int vector[row];
    int productArray[row];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "bigArray[" << i << "][" << j << "] = " << "\n";
            cin >> bigArray[i][j];
        }
    }
    for (int j = 0; j < 4; j++)
    {
        cout << "smallArray[" << j << "]: " << "\n";
        cin >> vector[j];
    }
    for (int i = 0; i < 4; i++)
    {
        int temp = 0;
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            temp = bigArray[i][j] * vector[j];
            sum = sum + temp;
        }
        productArray[i] = sum;
    }
    for (int i=0; i<4; i++)
    {
        cout << "productArray[" << i << "]: " << productArray[i]<<"\n";
    }
}