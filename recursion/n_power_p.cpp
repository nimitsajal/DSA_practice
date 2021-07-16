#include<iostream>
using namespace std;

int power(int n, int p){
    if(p == 0){
        return 1;   //when multiplying, return 1 (so as to not make any update to previous csalculations)
    }
    
    return n * power(n, p-1); 
}

int main(){
    int n ,p;
    cin >> n >> p;

    cout << power(n, p) << endl;;
    
    return 0;
}