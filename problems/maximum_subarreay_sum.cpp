#include<iostream>
#include<string>
using namespace  std;

void print_subarrays(int arr[], int n){
    int maxSum = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            maxSum = max(sum, maxSum);
        }
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