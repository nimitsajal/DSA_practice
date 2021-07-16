#include<iostream>
using namespace std;

int gcd(int a, int b){
    int n;
    while(a%b != 0){
        n = a%b;
        a = b;
        b = n;
    }
    return b;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}