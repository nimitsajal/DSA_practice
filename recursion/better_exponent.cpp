#include<iostream>
using namespace std;

int better_exponent(int n, int p){
    if(p == 0){
        return 1;
    }
    if(p%2 == 0){
        return better_exponent(n, p/2) * better_exponent(n, p/2);
    }
    else{
        return n * better_exponent(n, p/2) * better_exponent(n, p/2);
    }
}

int main(){
    int n, p;
    cin >> n >> p;

    cout << better_exponent(n, p) << endl;

    return 0;
}