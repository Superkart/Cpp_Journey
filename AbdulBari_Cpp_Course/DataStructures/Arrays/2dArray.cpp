#include <iostream>

using namespace std;



int main()
{

    int A[2][3] = {{1,2,3}, {4,5,6}}; // Rows and Columns in Stack

    int* B[3]; //Rows in stack
    B[0] = new int[2]; //Columns in Heap
    B[1] = new int[2];
    B[2] = new int[2];
    

    int** C[3]; //Rows in Heap
    C[0] = new int*[2];
    C[1] = new int*[2];
    C[3] = new int*[2];


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<C[i][j]<<", ";
        }
        cout<<endl;
    }
    return 0;
}