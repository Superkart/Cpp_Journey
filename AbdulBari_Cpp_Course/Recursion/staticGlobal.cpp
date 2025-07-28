#include <iostream>
using namespace std;

static int x = 0;
int staticVariable(int num)
{
    if(num > 0)
    {
        x++;
        return staticVariable(num - 1) + x;

    }
    return 0;
} 

int main()
{
    cout<<staticVariable(5)<<endl;
    cout<<staticVariable(5)<<endl;

    return 0;
}