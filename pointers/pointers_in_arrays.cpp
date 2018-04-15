#include <iostream>

using namespace std;

int main()
{
    int A[] = {2,3,4,5};
    cout<<"Address of first element of A: "<<A<<"\n";
    cout<<"Address of first element of A: "<<&A[0]<<"\n";
    cout<<"First value of A: "<<A[0]<<"\n";
    cout<<"Second value of A: "<<A[2]<<"\n";
    cout<<"First value of A: "<<*A;
    return 0;

}