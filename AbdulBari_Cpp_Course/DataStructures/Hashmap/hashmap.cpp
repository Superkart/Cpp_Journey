#include <iostream>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
    map<int, int> map1 = {{1,100}, {2,200}};
    set<int> set1;

    map1[6000] = 100;
    map1[3] = 300;
    for(auto i:map1)
    {
        i.second = 100;
        cout<<i.first<<" "<< i.second<<endl;
    }
    cout<<endl;
    for(auto i:map1)
    {
        cout<<i.first<<" "<< i.second<<endl;
    }
    cout<<endl;
    
    auto itr=map1.find(3);
    if(itr==map1.end()){

    }
    map1.erase(3);
    map1.insert({1,1});
    set1.insert(1);
    set1.erase(1);
    map1[4];
    cout<<map1[4];

}