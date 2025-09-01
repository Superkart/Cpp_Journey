#include <iostream>

using namespace std;

int main()
{

    int *p, *q;

    p = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 4;

    q = new int[5];
    for(int i=0; i<3; i++)
    {
        q[i] = p[i];
        cout<<q[i];
    }
    cout<<endl;


    for(int i =0; i<3; i++)
    {
        cout<<p[i];
    }

    delete []p;
    p = q;
    q=NULL;

    return 0;
}