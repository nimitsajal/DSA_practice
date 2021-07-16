#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1)
        return true;
    // cout << arr[0] << endl;
    bool res = isSorted(arr+1, n-1);
    // cout << res << endl;
    return (arr[0] <= arr[1] && res);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(isSorted(arr, n)){
        cout << "SORTED" << endl;
    }
    else{
        cout << "NOT Sorted" << endl; 
    }

    return 0;
}