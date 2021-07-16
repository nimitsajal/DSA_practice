#include<iostream>
using namespace std;

int tile(int n){
    if(n == 1){
        return 1;
    }
    if(n <= 0){
        return 0;
    }
    int count = 0;
    count += (tile(n-1) + tile(n-2));
    return count;
}

int main(){
    int n;
    cin >> n;

    cout << tile(n) << endl;

    return 0;
}