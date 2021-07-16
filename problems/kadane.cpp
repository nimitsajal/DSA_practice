#include<iostream>
#include<string>
using namespace  std;

void print_subarrays(int arr[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(arr[i] < 0){     // in actual kadane, it's "sum < 0" instead of "arr[i] < 0"
            sum = 0;        // 5
        }                   // 2 -4 3 2 1  ->  22 instead of 20 as answer when using actual kadane algo *?*?
        // cout << sum << endl;
        maxSum = max(sum, maxSum);
    }
    cout << maxSum << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    print_subarrays(arr, n);

    return 0;
}