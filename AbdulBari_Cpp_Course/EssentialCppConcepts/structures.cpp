#include <iostream>

using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
    char c;
} r_global;



int main()
{
    cout << r_global.breadth<<endl;
    cout << r_global.lenght <<endl;
    Rectangle r1 = {10, 20};

    cout<< sizeof(r1) << endl;
    cout<< sizeof(r_global)<<endl;
    return 0;
}