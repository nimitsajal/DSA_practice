#include<iostream>
#include<string>
using namespace std;

bool binarySearch(int arr[], int n, int key){
    int mid ;
    int start = 0;
    int end = n;
    
    while(start <= end){
        mid = (start + end) / 2;

        if(mid < key){
            //update start
            start = mid + 1;
        }
        else if(mid > key){
            //update end
            end = mid - 1; 
        }
        else{
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    if(binarySearch(arr, n, key)){
        cout << "Key Found" << endl;
    }
    else{
        cout << "Key NOT Found" << endl;
    }

    return 0;
}