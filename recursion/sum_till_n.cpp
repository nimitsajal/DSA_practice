#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;   //when adding, return 0 (so as to not make any update to previous csalculations)
    }
    return n + sum(n-1);
}


int main(){
    int n;
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}