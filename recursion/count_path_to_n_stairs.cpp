#include<iostream>
using namespace std;

int stairs(int n, int pos){
    int ways = 0;
    if(pos >= n){
        ways++;
        return ways;
    }
    int a=0, b=0, c=0;
    a = stairs(n, pos+1);
    if((n-pos)>=2){
        b = stairs(n, pos+2);
    }
    if((n-pos)>=3){
        c = stairs(n, pos+3);
    }
    return a+b+c;
}

int main(){
    int n;
    cin >> n;

    cout << stairs(n, 0 ) << endl;

    // cout << ways << endl;

    return 0;
}