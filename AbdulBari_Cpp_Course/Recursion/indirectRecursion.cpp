#include <iostream>
using namespace std;


void FunB(int n);

void FunA(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        FunB(n-1);
    }
}

void FunB(int n)
{   
    if(n>1)
    {
        cout<<n<<endl;
        FunA(n/2);
    }

}

int main()
{
    FunA(30);
    return 0;
}