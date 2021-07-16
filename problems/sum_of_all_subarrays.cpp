#include<iostream>
#include<string>
using namespace std;

void sum_of_all_subarrays(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            // for(int k=i; k<=j; k++){
            //     sum += arr[k];
            // }
            sum += arr[j];
            cout << "Sum = " << sum << ", ";
        }
        sum = 0;
    }
    cout << endl;

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sum_of_all_subarrays(arr, n);

    return 0;
}