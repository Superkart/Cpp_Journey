#include <iostream>
using namespace std;

int SumOfNNaturalNumRecursion(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return SumOfNNaturalNumRecursion(n-1) + n;
    }
}

int ItterativeSum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    cout<<SumOfNNaturalNumRecursion(3)<<endl;
    cout<<ItterativeSum(5)<<endl;
    return 0;
}