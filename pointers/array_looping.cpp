#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30};
    cout << "arr = " << arr << endl << endl;    // "arr" is a "pointer" that points to 1st element of the array. It is an "array pointer", so it does not increment by 4 always.

    cout << "*arr = " << *arr << endl << endl;  // "*arr" is pointing to the value at 1st position of the array.

    cout << "looping using '*(arr+i)'" << endl;
    for(int i=0; i<3; i++){
        cout << *(arr+i) << " ";
    }
    cout << endl << endl;

    int *ptr = arr;
    cout << "looping using '*ptr & ptr++'" << endl;
    for(int i=0; i<3; i++){
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl << endl;

    return 0;
}