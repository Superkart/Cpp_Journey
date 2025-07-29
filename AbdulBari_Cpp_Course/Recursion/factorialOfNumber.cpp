#include <iostream>
using namespace std;


int FactorialRecursion(int n)
{
    if(n == 0)
    {
        return 1;
    }

    else
    {
        return FactorialRecursion(n-1) * n;
    }
}

int FactorialItterative(int n)
{
    int factorial = 1;
    if(n == 0)
    {
        return 1;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            factorial = factorial * i;
        }
        return factorial;
    }
    return 0;
}
int main()
{
    cout<<FactorialRecursion(4)<<endl;
    cout<<FactorialItterative(4)<<endl;
    return 0;
}