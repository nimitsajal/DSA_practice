// Given a list of numbers and a number k, return whether any two numbers from the list add up to k
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

#include<iostream>
#include<algorithm>
using namespace std;

void sum_k(int arr[], int n, int k){
    int l = 0;
    int r = n-1;
    sort(arr, arr+n);
    bool found = false;
    while(l<r){
        if(arr[l]+arr[r] == k){
            cout << arr[l] << " + " << arr[r] << endl;
            found = true;
            l++;
        }
        else if(arr[l]+arr[r]>k){
            r--;
        }
        else{
            l++;
        }
    }
    if(!found)   cout << "NOT POSSIBLE" << endl;
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sum_k(arr, n, k);
    
    return 0;
}