#include <iostream>

using namespace std;


struct Array
{
    int* A;
    int size;
    int length;
};

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
        cout<<arr.A[i];
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
    //Append(100, arr);
    Insert(15, 0, arr);
    DisplayArray(arr);

    delete[] arr.A;
    return 0;
}