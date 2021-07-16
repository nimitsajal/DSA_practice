#include<iostream>
using namespace std;

int updateBit(int n, int i, int val){
    if(val == 0){
        return (n & (~(1 << i)));
    }
    else{
        return ((n & (~(1 << i))) | (1 << i));
    }
}

int main(){
    int n, i, val;
    cin >> n >> i >> val;

    cout << updateBit(n, i, val) << endl;

    return 0;
}