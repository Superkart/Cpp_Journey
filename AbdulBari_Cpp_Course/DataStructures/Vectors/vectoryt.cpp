#include <iostream>
#include <vector>

using namespace std;


int main()
{

    vector<int> v1 = {1,3,6};
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);

    cout<<v1[2]<<endl;
    // cout<<v1.front()<<endl;
    // cout<<v1.back()<<endl;
    cout<<v1.size()<<endl; //number of elements actually currently stored
    cout<<v1.capacity()<<endl; //Total elements the vector can store DOES NOT AUTO SHRINK
    v1.shrink_to_fit();
    cout<<v1.capacity()<<endl;
    v1.insert(v1.begin() + 2, 55);
    v1.erase(v1.begin());
    cout<<v1[2]<<endl;

    return 0;
}