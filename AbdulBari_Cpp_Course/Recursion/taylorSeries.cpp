#include <iostream>
using namespace std;


double TaylorSeries(int x, int n)
{
    static double p=1, f=1;
    double r;

    if(n == 0)
    {
        return 1; 
    }
    else
    {
        r = TaylorSeries(x, n-1);
        p = p * x;
        f = f * n;
        return r + p/f;

    }
}

double TaylorSeriesOptimizedRecursion(int x, int n)
{
    static double result = 1;

    if(n == 0)
    {
        return result;
    }
    else
    {
        result = 1+ x * result/n;
        return TaylorSeriesOptimizedRecursion(x, n-1);
    }
}

double TaylorSeriesOptimizedItterative(int x, int n)
{
    double sum = 1;
    int i;
    double power = 1;
    double factorial = 1;

    for(i=1; i<=n; i++)
    {
        power = power * x;
        factorial = factorial * i;
        sum = sum + power/factorial;
    }

    return sum;
}

int main()
{
    cout<<TaylorSeriesOptimizedRecursion(2,3)<<endl;
    cout<<TaylorSeries(2, 3)<<endl;
    cout<<TaylorSeriesOptimizedItterative(2,3)<<endl;
    return 0;
} 
