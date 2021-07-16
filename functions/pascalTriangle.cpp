// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std;

int factorial(int n){
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
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}