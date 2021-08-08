#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    for(int i=0; i<x; i++){
        if(arr[i][y] == 1){
            return false;
        }
    }

    int row = x;
    int col = y;
    while(row>=0 && col>=0){
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;
    while(row>=0 && col<n){
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col++;
    }

    // for(int i=x; i>=0; i--){
    //     for(int j=y; j>=0; j--){
    //         if(arr[i][j] == 1){
    //             return false;
    //         }
    //     }
    // }
    // for(int i=x; i>=0; i--){
    //     for(int j=y; j<n; j++){
    //         if(arr[i][j] == 1){
    //             return false;
    //         }
    //     }
    // }
    return true;
}

bool n_queens(int** arr, int x, int n){
    if(x>=n){
        // arr[x][y] = 1;
        return true;
    }
    for(int y=0; y<n; y++){

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        if(isSafe(arr, x, y, n)){
            arr[x][y] = 1;
            if(n_queens(arr, x+1, n)){
                return true;
            }
            arr[x][y] = 0;
            // return false;
        }
        // return false;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){
            arr[i][j] = 0;
        }
    }

    // cout << "arr" << endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    if(n_queens(arr, 0, n)){
        cout << "POSSIBLE" << endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}