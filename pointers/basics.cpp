#include<iostream>
using namespace std;

int main(){ 
    int a = 10;
    cout << "a = " << a << endl;

    int *aptr = &a;
    cout << "aptr = " << aptr << endl;

    *aptr = 20;
    cout << "updated = " << *aptr << endl;

    return 0;
}