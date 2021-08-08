#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratmaze(int** arr, int x, int y, int n, int** solArr){
    if(x==n-1 && y==n-1){
        solArr[x][y] = 1;
        return true;
    }
    if(isSafe(arr, x, y, n)){
        solArr[x][y] = 1;
        if(ratmaze(arr, x+1, y, n, solArr)){
            return true;
        }
        if(ratmaze(arr, x, y+1, n, solArr)){
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    // initialization of arr dynamically
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    //  input of arr
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    //  initialization and declaration of solArr
    int** solArr = new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j] = 0;
        }
    }

    // cout << "arr" << endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "solArr" << endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << solArr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //   function call
    if(ratmaze(arr, 0, 0, n, solArr)){
        cout << "POSSIBLE" << endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}