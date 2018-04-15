#include <iostream>

using namespace std;

void bubbleSort(int *A, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, A[] = {3, 2, 1, 5, 6, 4};
    bubbleSort(A, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "\n";
    }
}