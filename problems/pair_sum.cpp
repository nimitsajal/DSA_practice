#include<iostream>
using namespace std;

void pair_sum(int arr[], int n, int k){
    int i = 0;
    int j = n-1;
    
    while(i < j){
        if(arr[i] + arr[j] == k){
            cout << "i = " << i+1 << ", j = " << j+1 << endl;
            cout << arr[i] << " + " << arr[j] << " = " << k <<  endl;
            break;
        }
        else if(arr[i] + arr[j] < k){
            i++;
        }
        else if(arr[i] + arr[j] > k){
            j--;
        }
        else{
            cout << "NOT FOUND" << endl;
        }
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    pair_sum(arr, n, k);

    return 0;
}