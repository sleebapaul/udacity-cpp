#include <iostream>

using namespace std;

// What if we need to change the sorting order at times?

// We will need to modify the swap operation accordingly
// We can use a callback for this.
// Callback function should compare two integers, should return 1
// if the first element has higher rank, 0 if elements are equal,
// and -1 if second element has higher rank

// Callback function

int compare(int a, int b)
{
    if (a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// We can write multiple callbacks for our needs

void bubbleSort(int *A, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(A[j], A[j + 1]) > 0) // Swap operation
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
    bubbleSort(A, 6, compare);
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "\n";
    }
}