#include<iostream>
using namespace std;

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[r];
    arr[r] = arr[i];
    arr[i] = temp;

    return i;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}
    

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}