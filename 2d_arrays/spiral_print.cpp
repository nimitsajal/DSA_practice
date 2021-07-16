#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Normal Print" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Spiral Print" << endl;
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;
    int i = 0;
    int j = 0;
    while(row_start <= row_end && col_start <= col_end){
        for(j=col_start; j<=col_end; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
        j--;
        row_start++;

        for(i=row_start; i<=row_end; i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
        i--;
        col_end--;

        for(j=col_end; j>=col_start; j--){
            cout << arr[i][j] << " ";
        }
        cout << endl;
        j++;
        row_end--;

        for(i=row_end; i>=row_start; i--){
            cout << arr[i][j] << " ";
        }
        cout << endl;
        i++;
        col_start++; 
    }

    return 0;
}