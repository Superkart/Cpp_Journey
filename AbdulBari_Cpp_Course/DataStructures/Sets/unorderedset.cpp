#include <iostream>
#include <unordered_set>

using namespace std;



int main()
{

    unordered_set<char> mySet;

    mySet.insert('A');
    mySet.insert('B');

    for(auto i : mySet)
    {
        cout << i << endl;
    }

    mySet.erase('C'); 

    if(mySet.find('D') != mySet.end())
    {
        cout<< "D is found"<< endl; 
    }
    else
        {
            cout<< "D is not found"<< endl;
        }    
    return 0;
}