#include <iostream>

using namespace std;


void printArrElements(int *Arr, int size)
{
    Arr[0] = 100;
}

int * returnArrayAddress(int size)
{
    int *p;
    p = new int[size];

    for(int i=0; i<size; i++)
    {
        p[i] = i+1;
    }

    return p;
}
int main ()
{

    int A[] = {2, 4, 6, 8, 10};
    int size = sizeof(A)/sizeof(int);
    
    for(int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    printArrElements(A, size);

    for(int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;


    int *ptr, size_ptr = 9;
    ptr = returnArrayAddress(size_ptr);

    for(int i=0; i<size_ptr; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    delete [] ptr;


    
     return 0;
}