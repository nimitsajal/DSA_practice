#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int size1 = mid-l+1;
    int size2 = r-mid;

    int tempArr1[size1];
    int tempArr2[size2];

    for(int i=0; i<size1; i++){
        tempArr1[i] = arr[i+l];
    }

    for(int i=0; i<size2; i++){
        tempArr2[i] = arr[i+mid+1];
    }
    
    int i=0;
    int j=0;
    int k=l;
    while(i<size1 && j<size2){
        if(tempArr1[i]<=tempArr2[j]){
            arr[k] = tempArr1[i];
            k++;
            i++;
        }
        else{
            arr[k] = tempArr2[j];
            k++;
            j++;
        }
    }
    while(i<size1){
        arr[k] = tempArr1[i];
        k++;
        i++;
    }
    while(j<size2){
        arr[k] = tempArr2[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);     //dividing to first half
        mergeSort(arr, mid+1, r);   //dividing to second half

        merge(arr, l, mid, r);  //actual sorting
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
    cout << arr[i] << " ";
    }

    return 0;
}