#include <iostream>

using namespace std;


struct Array
{
    int* A;
    int size;
    int length;
};

void EnterArrayElements(int n, Array arr)
{
    cout<<"Enter " << n <<" Elements into the array"<<endl;
    if(n>arr.size)
    {
        cout<<"n is More than arr size"<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        cin>>arr.A[i];
    }
}
void DisplayArray(Array arr)
{

    cout<<"The Array elements are: "<<endl;
    for(int i = 0; i<arr.length; i++)
    {
        cout<<arr.A[i];
    }
        cout<<endl;
}

int main()
{
    Array arr;
    int n;
    cout<<"Enter the size of the Array: "<<endl;
    cin>>arr.size;
    arr.A = new int[arr.size]; 
    arr.length = 0;

    cout<<"Enter Number of elements you want to enter"<<endl;
    cin>>n;
    arr.length = n;
    EnterArrayElements(n,arr);
    DisplayArray(arr);
    return 0;
}