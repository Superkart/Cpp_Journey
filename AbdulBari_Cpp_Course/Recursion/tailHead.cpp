#include <iostream>
using namespace std;


void TailRecursion(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        TailRecursion(n-1);
    }
    else
    {
        cout<<endl;
        return;
    }
}

void HeadRecursion(int n)
{
    if(n>0)
    {
        HeadRecursion(n-1);
        cout<<n<<" ";
    }
}

int main ()
{
    int num = 3;

    TailRecursion(num);
    HeadRecursion(num);
    
    return 0;
}