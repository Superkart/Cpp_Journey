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

void StringToSet(const string &str, set<char> &s)
{
    for(auto ch : str)
    {
        s.insert(ch);
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

    set<char> charSet;
    charSet.insert('Z');    
    charSet.insert('Y');
    for(auto ch : charSet)
    {
        cout << ch << endl;
    }

    StringToSet("Karthik", charSet);
    for(auto it: charSet)
    {
        cout << it;
    }
    cout<<endl;

    return 0;

}




