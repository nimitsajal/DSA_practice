#include<iostream>
using namespace std;

int first(int arr[], int n, int i, int k){
    if(i == n){
        return -1;
    }
    if(arr[i] == k){
        return i;
    }
    return first(arr, n, i+1, k);
}

int last(int arr[], int n, int i, int k){
    if(i == n){
        return -1;
    }
    int val = last(arr, n, i+1, k);
    if( val != -1){
        return val;
    }
    if(arr[i] == k){
        return i;
    }
    return -1;
}

// int last(int arr[], int n, int i, int k){
//     if(i == 0){
//         return -1;
//     }
//     if(arr[i] == k){
//         return i;
//     }
//     return last(arr, n, i-1, k);
// }

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int  i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << first(arr, n, 0, k);
    cout << endl;
    cout << last(arr, n, 0, k);

    return 0;
}