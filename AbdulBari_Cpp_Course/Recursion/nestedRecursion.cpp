#include <iostream>
using namespace std;


int FunA(int n)
{
    if(n>100)
    {
        return n-10;
    }
    return FunA(FunA(n+11));
}

int main()
{
    cout<<FunA(500)<<endl;
    return 0;
}