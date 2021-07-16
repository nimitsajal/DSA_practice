#include<iostream>
using namespace std;

int main(){
    int n, m, key;
    cin >> n >> m >> key;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout <<  arr[i][j];
    //     }
    //     cout << endl;
    // }

    int i = n-1;
    int j = 0;
    bool found = false;

    while(i>=0 && j<m){
        if(arr[i][j] == key){
            cout << "Key FOUND" << endl;
            found = true;
            break;
        }
        else if(key < arr[i][j]){
            i--;
        }
        else{
            j++;
        }
    }
    if(!found){
        cout << "Key NOT Found" << endl;
    }

    return 0;
}