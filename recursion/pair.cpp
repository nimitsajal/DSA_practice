#include<iostream>
using namespace std;

int pairs(int n){
    if(n==1 || n==0 || n==2){
        return n;
    }
    int count = 0;
    count += (pairs(n-1) + (n-1)*pairs(n-2));
    return count;
}

int main(){
    int n;
    cin >> n;

    cout << pairs(n) << endl;

    return 0;
}