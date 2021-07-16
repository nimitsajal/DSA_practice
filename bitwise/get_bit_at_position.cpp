#include<iostream>
using namespace std;

int getBit(int n, int i){
    if((n & (1<<i)) == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n, i;
    cin >> n >> i;

    cout << getBit(n, i) << endl;

    return 0;
}