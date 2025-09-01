#include <iostream>

using namespace std;

void PrintArray(int* p, int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<p[i];
    }
}

int main()
{
    int A[5] = {0,1,2,3,4};
    int *p;
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin >> n ;
    p = new int[n];

    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for(int i =0; i<5; i++)
    {
        cout<<A[i];
    }
    cout<<endl;
    PrintArray(p, n);
    delete []p;
    return 0;
}

