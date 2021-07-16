#include<iostream>
#include<string>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[i] < arr[j]){
                // cout << "i = " << i << ", j = " << j << endl;
                int k = i-1;
                int temp = arr[i];
                while(k >= j){
                    arr[k+1] = arr[k];
                    k--;
                }
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
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

    insertionSort(arr, n);

    return 0;
}