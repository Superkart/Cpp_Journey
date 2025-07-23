#include <iostream>

using namespace std;



int CallByValueAdd(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{

    cout << CallByValueAdd(10, 20)<<endl;


}