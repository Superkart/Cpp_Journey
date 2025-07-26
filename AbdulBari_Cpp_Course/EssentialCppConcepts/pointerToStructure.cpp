#include <iostream>

using namespace std;

int main()
{
    struct Rectangle
    {
        int length;
        int breadth;
    };

    

        Rectangle *rp;

        rp = new Rectangle;

        rp -> length = 20;
        rp -> breadth = 25;
        
        cout<<rp->length<<endl;
        cout<<rp->breadth<<endl;

        delete rp;

        return 0;
}