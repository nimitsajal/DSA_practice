#include<iostream>
#include<string>
using namespace std;

int kadane(int arr[], int n){
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
    return maxSum;
}

void max_circular_subarray_sum(int arr[], int n){
    int totalSum = 0;
    int nonWrapSum = kadane(arr, n);

    for(int i=0; i<n; i++){
        totalSum += arr[i];
        arr[i] *= -1;
    }

    int wrapSum = totalSum + kadane(arr, n);

    int result = max(wrapSum, nonWrapSum);

    cout << result << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    max_circular_subarray_sum(arr, n);

    return 0;
}