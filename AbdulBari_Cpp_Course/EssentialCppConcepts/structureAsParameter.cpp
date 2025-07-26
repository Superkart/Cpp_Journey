#include <iostream>

using namespace std;


struct Rectangle
{
    int Length = 0;
    int Breadth = 0;
};

void CallByValueStruct(Rectangle r)
{
    r.Length = 20;
    r.Breadth = 10;
    cout<<"Length: "<<r.Length<<endl;
    cout<<"Breadth: "<<r.Breadth<<endl;
}

void CallByAddressStruct(Rectangle *r)
{
    r -> Length = 200;
    r ->Breadth = 50;
}

Rectangle * ReturnPointerOfNewRectangle(int Len, int Br)
{
    Rectangle *r;
    r = new Rectangle;
    r ->Length = Len;
    r ->Breadth = Br;
    return r;
}

int main ()
{
    
    Rectangle r1 = {10, 5};

    CallByValueStruct(r1);
    CallByAddressStruct(&r1);

    cout<<"Length: "<<r1.Length<<endl;
    cout<<"Breadth: "<<r1.Breadth<<endl;
    
    Rectangle *p = ReturnPointerOfNewRectangle(900, 800);
    cout<<p->Length<<", "<<p->Breadth<<endl;


    delete p;

    
    return 0;
}