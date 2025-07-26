#include <iostream>

using namespace std;


int add(int a, int b)
{

    int sum = a + b;
    return sum;
}
int main()
{

    int num1 = 20;
    int num2 = 39;
    int sum;

    sum = add(num1, num2);
    cout << sum<<endl;
    return 0;
}