#include <iostream>

using namespace std;

class Rectangle
{
    private: 
        int Length;
        int Breadth;

    
    public:

        Rectangle()
        {
            Length = 0;
            Breadth = 0;
        }

        Rectangle(int Len, int Br)
        {
            Length = Len;
            Breadth = Br;
        }

        int Area()
        {
            return Length * Breadth;
        }

        int Perimeter()
        {
            return 2 * (Length + Breadth);
        }

        void SetLength(int L)
        {
            Length = L;
        }
        void SetBreadth(int B)
        {
            Breadth = B;
        }

        int GetLength()
        {
            return Length;
        }
        
        int GetBreadth()
        {
            return Breadth;
        }

        ~Rectangle()
        {
            cout<<"Destructor Ran"<<endl;
        }


};

int main()
{

    Rectangle r(10, 20);

    r.SetBreadth(40);
    cout<<r.Area()<<endl;
    cout<<r.Perimeter()<<endl;


    return 0;
}