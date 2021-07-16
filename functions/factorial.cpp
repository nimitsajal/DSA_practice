#include<iostream>
using namespace std;

int factorial(int n){
    int product = n;
    for(int i=1; i<n; i++){
        product *= n-i;
    }
    return product;
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}