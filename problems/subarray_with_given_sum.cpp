#include<iostream>
#include<string>
using namespace std;

void subarray_with_given_sum(int arr[], int n, int s){
    int i = 0;
    int j = 0;
    bool found = false;
    int sum = arr[0];

    while(i<n && j<n){
        if(sum == s){
            cout << i+1 << " " << j+1 << endl;
            found = true;
            break;
        }
        else if(sum > s && i < j){
            sum -= arr[i];
            i++;
        }
        else{
            j++;
            sum += arr[j];
        }
    }
    if(!found){
        cout << "-1 -1" << endl;
    }
}

int main(){
    int n, s;
    cin >> n >> s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    subarray_with_given_sum(arr, n, s);

    return 0;
}