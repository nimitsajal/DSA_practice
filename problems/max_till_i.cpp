#include<iostream>
#include<string>
using namespace std;

void max_till_i(int arr[], int n){
    int max = arr[0];
    cout << "MAX at [0] = " << max << endl;
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        cout << "MAX at [" << i << "] = " << max << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    max_till_i(arr, n);

    return 0;
}