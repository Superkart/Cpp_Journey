#include <iostream>

using namespace std;

int main() 
{

    int size;
    cout<< "Enter Array Size: ";
    cin >> size; 

    int arr[size];

    arr[0] = 2;

    for(int x : arr)
    {
        cout << x << endl;
    }


    return 0;
}

