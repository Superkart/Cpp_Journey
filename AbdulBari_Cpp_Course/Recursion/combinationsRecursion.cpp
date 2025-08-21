#include <iostream>

using namespace std;

int Factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return Factorial(n-1) * n;
    }
}

int Combinations(int n, int r)
{
    if(n==r || r==0)
    {
        return 1;
    }
    if(n >=r)
    {
        return Factorial(n)/(Factorial(r) * Factorial(n-r));
    }
    else
    {
        cout<<"Error"<<endl;
        return 0;
    }
}

int CombinationsRecursive(int n, int r)
{
    if(n==r || r ==0)
    {
        return 1;
    }

    return CombinationsRecursive(n-1, r-1) + CombinationsRecursive(n-1, r);
}
int main()
{
    cout<<Combinations(5, 2)<<endl;
    cout<<CombinationsRecursive(5,2)<<endl;
    return 0;
}