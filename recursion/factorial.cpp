#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;   //when multiplying, return 1 (so as to not make any update to previous 
    }

    return n * factorial(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << factorial(n) << endl;;
    
    return 0;
}