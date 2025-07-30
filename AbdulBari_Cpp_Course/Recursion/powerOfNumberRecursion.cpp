#include <iostream>
using namespace std;


int PowerOfNumber(int n, int p)
{
    if(p == 0)
    {
        return 1; 
    }

    return PowerOfNumber(n,p-1) * n;
}

int PowerOfNumberOpt(int n, int p)
{
    if(p == 0)
    {
        return 1;
    }

    if(p%2 == 0)
    {
        return PowerOfNumberOpt(n*n, p/2);
    }
    else
    {
        return n * PowerOfNumberOpt(n*n, (p-1)/2);
    }
}

int PowerOfNumberItterative(int n, int p)
{
    int power = 1;
    if(p == 0)
    {
        return 1;
    }
    else
    {
        for(int i=1; i<=p; i++)
        {
            power = power * n;
        }
    return power;
    }
}
int main()
{
    cout<<PowerOfNumber(4,2)<<endl;
    cout<<PowerOfNumberOpt(4,2)<<endl;
    cout<<PowerOfNumberItterative(5,2)<<endl;
    return 0;
}