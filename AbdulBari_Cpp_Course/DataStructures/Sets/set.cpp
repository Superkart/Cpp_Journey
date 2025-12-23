#include <iostream>
#include <set>
using namespace std;


void RemoveSetElement(set<int> &s, int value)
{
    auto it = s.find(value);

    if(it != s.end())
    {
        s.erase(value);
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
}

int main()
{

    set<int> mySet;
    
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(1414);
    RemoveSetElement(mySet, 20);
    for(auto i : mySet)
    {
        cout << i << endl;
    }



    return 0;

}

