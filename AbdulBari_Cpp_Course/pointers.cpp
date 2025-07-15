#include <iostream>

using namespace std;

int main()
{

     /// ALL THESE IN STACK
    int a = 10;
    cout<<a<<endl;

    int *p;
    p = &a;
    
    //cout<<p<<endl;
    //cout<<&a<<endl;

    int A[5] = {2, 4, 6, 8, 10};

    int *PA = &A[0];

 //   for(int i = 0; i<5; i++){
  //      cout << PA[i]<<endl;
 //   }

   
    // ALL THIS IN HEAP

    int *Arr;
    Arr = new int[5];
    cout << sizeof(Arr);
    for(int i = 0; i< 7; i++){
        Arr[i] = 2 * i;
        cout<<Arr[i]<<endl;
    }
    
    delete [] Arr;
    return 0;
}