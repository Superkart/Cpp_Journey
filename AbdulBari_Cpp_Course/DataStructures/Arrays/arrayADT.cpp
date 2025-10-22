#include <iostream>
#include "arrayADT.h"

using namespace std;


void EnterArrayElements(int n, Array &arr)
{
    cout<<"Enter " << n <<" elements into the array"<<endl;
    if(n>arr.size)
    {
        cout<<"n is more than arr size"<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length = n;
}
void DisplayArray(const Array &arr)
{

    cout<<"The Array elements are: "<<endl;
    for(int i = 0; i<arr.length; i++)
    {
        cout<<arr.A[i]<< " ";
    }
        cout<<endl;
}
void Append(int value, Array &arr)
{
    if(arr.length < arr.size)
    {
        arr.A[arr.length] = value;
        arr.length++;
    }
    else
    {
        cout<<"Reached max size of array"<<endl;
    }
}

void Insert(int value, int index, Array &arr)
{
    if(index < 0 || index > arr.length || arr.length == arr.size)
    {
        cout<<"Array has reached max size, or index is out of bounds"<<endl;
        return;
    }
    for(int i=arr.length; i > index; i--)
    {
        arr.A[i] = arr.A[i-1];
    }
    arr.A[index] = value;
    arr.length++;
}
int Delete(int index, Array &arr)
{
    int x = 0;
    if(index >= 0 && index < arr.length)
    {
        x = arr.A[index];
        for(int i=index; i< arr.length-1; i++)
        {
            arr.A[i] = arr.A[i+1];
        }
        arr.length--;
        return x;
        
    }
    return 0;

}

int main()
{
    Array arr;
    int n;

    cout<<"Enter the size of the Array: "<<endl;
    cin>>arr.size;

    arr.A = new int[arr.size]; 
    arr.length = 0;
    cout << "Enter number of elements you want to enter: ";
    cin >> n;

    EnterArrayElements(n,arr);
    //Append(100, arr);
    Insert(15, 3, arr);
    DisplayArray(arr);
    cout<<Delete(2, arr)<<endl;
    DisplayArray(arr);

    delete[] arr.A;
    return 0;
}