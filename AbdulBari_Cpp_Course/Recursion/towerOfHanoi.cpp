#include <iostream>
using namespace std;


void TowerOfHanoi(int n, int A, int B, int C)
{
    if(n>0)
    {
        TowerOfHanoi(n-1, A, C, B);
        cout<<A<<"," << C<<endl;
        TowerOfHanoi(n-1, B, A, C);
    }
}

int main()
{
    TowerOfHanoi(5, 1, 2, 3);
    return 0;
}