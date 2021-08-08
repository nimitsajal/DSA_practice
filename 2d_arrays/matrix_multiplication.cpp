#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;;
    cin >> n1 >> n2 >> n3;
    int arr1[n1][n2];
    int arr2[n2][n3];
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin >> arr1[i][j];
        }
    }
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin >> arr2[i][j];
        }
    }

     for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    int arr3[n1][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            arr3[i][j] = 0;
        }
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
                // cout << "k = " << k << ", " << arr1[i][k] << ", " << arr2[k][j];
            }
        }
    }

    cout << endl;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}