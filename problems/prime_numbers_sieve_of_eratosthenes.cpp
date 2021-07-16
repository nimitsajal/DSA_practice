#include<iostream>
using namespace std;

void print_primes(int n){
    
    int arr[200] = {0};

    for(int i=2; i<=n; i++){
        if(arr[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                arr[j] = 1;
            }
        }

    }
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    
    print_primes(n);

    return 0;
}