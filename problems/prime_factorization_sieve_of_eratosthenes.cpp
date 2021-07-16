#include<iostream>
using namespace std;

void prime_factors(int n){
    int arr[200] = {0};
    for(int i=0; i<=n; i++){
        arr[i] = i;
    }
    for(int i=2; i<=n; i++){
        if(arr[i] == i){
            for(int j=i*i; j<=n; j+=i){
                if(arr[j] == j){
                    arr[j] = i;
                }
            }
        }
    }
    // for(int i=0; i<=n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout << "n = " << n << " arr[n] = " << arr[n] << endl;

    while(n != 1){
        cout << arr[n] << " ";
        n = n/arr[n];
    }
}

int main(){
    int n;
    cin >> n;

    prime_factors(n);
    
    return 0;
}