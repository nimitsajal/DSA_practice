#include<iostream>
#include<algorithm>
using namespace std;

int maxConsecutiveSum(int arr[], int n, int k){
    int maxSum = 0;
    int currSum = 0;
    for(int i=0; i<k; i++){
        currSum += arr[i];
    }
    maxSum = max(maxSum, currSum);

    // cout << "currSum = " << currSum << endl;
    // cout << "maxSum = " << maxSum << endl << endl;

    for(int i=0; i<n-k; i++){
        currSum = currSum + arr[i+k] - arr[i];
        maxSum = max(maxSum, currSum);
        // cout << "currSum = " << currSum << endl;
        // cout << "maxSum = " << maxSum << endl << endl;
    }
    return maxSum;
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << maxConsecutiveSum(arr, n, k) << endl;

    return 0;
}