#include<iostream>
#include<string>
using namespace  std;

int print_subarrays(int arr[], int n){
    int globalMax = arr[0];
        int maxSum = 0;
        int curr = 0;
        for(int i=0; i<n; i++){
            curr = arr[i];
            maxSum += curr;
            if(maxSum < curr) maxSum = curr;
            globalMax = max(globalMax, maxSum);
        }
        return globalMax;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << print_subarrays(arr, n) << endl;

    return 0;
}