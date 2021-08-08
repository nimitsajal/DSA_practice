#include<iostream>
#include<algorithm>
using namespace std;

// int min(int a, int b){
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int max(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

void min_max(int arr[], int n){
    int Min = INT_MAX;
    int Max = INT_MIN;

    if(n == 1){
        Min = arr[0];
        Max = arr[0];
        return;
    }
    if(n == 2){
        Min = min(arr[0], arr[1]);
        Max = max(arr[0], arr[1]);
    }

    for(int i=2; i<n; i++){
        Min = min(Min, arr[i]);
        Max = max(Max, arr[i]);
    }

    cout << "Min = " << Min << endl;
    cout << "Max = " << Max << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    min_max(arr, n);

    // for(int i=0; i<n; i++){
    //     cout << arr[i];
    // }

    return 0;
}