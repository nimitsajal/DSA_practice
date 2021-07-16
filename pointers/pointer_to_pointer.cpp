#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << "a = " << a << endl << endl;

    int *p = &a;
    cout << "p = " << p << endl;    //  address of a
    cout << "*p = " << *p << endl << endl; //  value at a

    int **q = &p;
    cout << "q = " << q << endl;    //  address of p
    cout << "*q = " << *q << endl;  //  value at p = address of a
    cout << "**q = " << **q << endl << endl;    //  value at (value at p = address of a) = value of a

    return 0;
}