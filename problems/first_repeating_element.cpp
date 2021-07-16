#include<iostream>
#include<string>
using namespace std;

void first_repeating_element(int arr[], int n){
    const int N = 1e6+2;
    int minidx = INT_MAX;
    int idx[N];

    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    for(int i=0; i<n; i++){
        if(idx[arr[i]] == -1){
            idx[arr[i]] = i;
        }
        else{
            minidx = min(idx[arr[i]], minidx); 
        }
    }

    if(minidx == INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << minidx+1 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    first_repeating_element(arr, n);

    return 0;
}