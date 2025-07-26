#include <iostream>
using namespace std;

template<class T>
class Arthematic
{
    private:
        T a;
        T b;

    public:
        Arthematic();
        Arthematic(T a, T b);
        T Add();
        T Subtract();

};

template<class T>
Arthematic<T>:: Arthematic()
{
    a = 0;
    b = 0;
}
template<class T>
Arthematic<T>:: Arthematic(T a, T b)
{
    this -> a = a;
    this -> b = b;
}
template<class T>
T Arthematic<T>::Add()
{
    return a + b;
}
template<class T>
T Arthematic<T>::Subtract()
{
    return a-b;
} 

int main()
{

    Arthematic<int> obj(20, 30);

    cout<<obj.Add()<<endl;

    return 0;
}