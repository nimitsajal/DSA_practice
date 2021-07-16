#include<iostream>
#include<string>
using namespace std;

void smallest_positive_missing(int arr[], int n){
    const int N = 1e6+2;
    bool check[N] = {false};

    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;
        }
    }

    for(int i=0; i<N; i++){
        if(check[i] == false){
            cout << i << endl;
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    smallest_positive_missing(arr, n);

    return 0;
}