#include<iostream>
#include<string>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            found = true;
            return found;
        }
        else{
            found = false;
        }
    }
    return found;
}

int main(){
    int n, key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> key;
    
    if(linearSearch(arr, n, key)){
        cout << "Key Found" << endl;
    }
    else{
        cout << "Key NOT Found" << endl;
    }

    return 0;
}