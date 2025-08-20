#include <iostream>

using namespace std;

int FibonacciItterative(int n)
{
    int sum = 0;
    int t0 = 0, t1 = 1;

    if(n<=1)
    {
        return n;
    }
    
    for(int i=2; i<=n; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}

int FibonacciRecursion(int n)
{
    if(n <= 1)
    {
        return n;
    }

    return FibonacciRecursion(n-1) + FibonacciRecursion(n-2);
}

int F[10];

int FibonacciMemoization(int n)
{
    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1) //Doesnt know yet
        {
            F[n-2] = FibonacciMemoization(n-2);
        }
        if(F[n-1] == -1) //Doesnt know yet
        {
            F[n-1] = FibonacciMemoization(n-1);
        }
        return F[n-2] + F[n-1];
    }

   
}
int main()
{
    for(int i=0; i<10; i++)
    {
        F[i] = -1;
    }

    cout<<FibonacciItterative(10)<<endl;
    cout<<FibonacciRecursion(10)<<endl;
    cout<<FibonacciMemoization(10)<<endl;
    return 0;
}