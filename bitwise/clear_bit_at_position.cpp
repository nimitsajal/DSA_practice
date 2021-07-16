#include<iostream>
using namespace std;

int clearBit(int n, int i){
    return (n & (~(1 << i)));
}

int main(){
    int n, i;
    cin >> n >> i;

    cout << clearBit(n, i) << endl;

    return 0;
}