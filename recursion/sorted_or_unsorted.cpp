#include<iostream>
using namespace std;

bool check(int arr[], int n, int p){
    if(p == n){
        return true;
    }
    if(arr[p-1] <= arr[p]){
        return check(arr, n, p+1);
    }
    else{
        return false;
    }
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(check(arr, n, 1)){
        cout << "SORTED" << endl;
    }
    else{
        cout << "UNSORTED" << endl;
    }

    return 0;
}