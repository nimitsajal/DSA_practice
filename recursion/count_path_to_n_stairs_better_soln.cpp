#include<iostream>
using namespace std;

int stairs(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    return stairs(n-3) + stairs(n-2) + stairs(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << stairs(n);

    return 0;
}