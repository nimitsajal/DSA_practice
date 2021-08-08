#include<iostream>
using namespace std;

int exponent(int n, int p){
    if(p == 0){
        return 1;
    }

    return n * exponent(n, p-1);
}

int main(){
    int n, p;
    cin >> n >> p;

    cout << exponent(n, p) << endl;

    return 0;
}