#include<iostream>
#include<string>
using namespace std;

void record_breaker(int arr[], int n, int z){
    int maxValue = arr[0];
    int no_recordBreakers = 0;
    for(int i=0; i<n; i++){
        if(i == 0){
            if(arr[i] > arr[i+1]){
                no_recordBreakers++;
                maxValue = max(maxValue, arr[i]);
            }
        }
        else if(i == n-1){
            if(arr[i] > maxValue){
                no_recordBreakers++;
                maxValue = max(maxValue, arr[i]);
            }
        }
        else{
            if(arr[i] > maxValue){
                if(arr[i] > arr[i+1]){
                    no_recordBreakers++;
                    maxValue = max(maxValue, arr[i]);
                }
            }
        }
    }

    cout << "Case #" << z << ": " << no_recordBreakers << endl;
}

int main(){
    int t;
    cin >> t;
    for(int z=1; z<=t; z++){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        record_breaker(arr, n, z);
    }

    return 0;
}