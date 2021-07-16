// for two numbers n and r, print binary coefficient of n and r -> nCr = n! / r! * (n-r)!

#include<iostream>
using namespace std;

int factorial(int n){
    // int product = n;
    // for(int i=1; i<n; i++){
    //     product *= n-i;
    // }
    // return product;
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n, r;
    cin >> n >> r;

    cout << nCr(n, r);

    return 0;
}