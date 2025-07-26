#include <iostream>

using namespace std;



int CallByValueAdd(int a, int b)
{
    int sum = a + b;
    return sum;
}

void CallByAddressSwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

void CallByReference(int &a, int &b)
{   
    int temp = a;
    a = b;
    b = temp;
}
int main()
{

    cout << CallByValueAdd(10, 20)<<endl;

    int num1 = 20;
    int num2 = 30;

    CallByAddressSwap(&num1,&num2);
    cout<< "num 1: " << num1 <<endl;
    cout<< "num 2: " << num2 <<endl;

    CallByReference(num1, num2);
    cout<< "num 1: " << num1 <<endl;
    cout<< "num 2: " << num2 <<endl;



}