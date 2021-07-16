#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;
    cout << "aptr = " << aptr <<endl;
    cout << "aptr value = " << *aptr <<endl;
    aptr++;
    cout << "aptr = " << aptr <<endl;
    cout << "aptr value = " << *aptr <<endl;

    char b = 'b';
    char *bptr = &b;
    cout << "bptr = " << bptr <<endl;
    cout << "bptr value = " << *bptr <<endl;
    bptr++;
    cout << "bptr = " << bptr <<endl;
    cout << "bptr value = " << *bptr <<endl;

    bool c = true;
    bool *cptr = &c;
    cout << "cptr = " << cptr <<endl;
    cout << "cptr value = " << *cptr <<endl;
    cptr++;
    cout << "cptr = " << cptr <<endl;
    cout << "cptr value = " << *cptr <<endl;

    // int *bptr = aptr+=1;
    // cout << "bptr = " << bptr <<endl;
    // cout << "bptr - aptr =  " << bptr - aptr <<endl;

    return 0;
}