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


int main()
{
    cout<<TaylorSeries(2, 3)<<endl;
    return 0;
} 