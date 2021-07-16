#include<iostream>
using namespace std;

bool isOne(int num, int pos){
    return (num & (1 << pos));
}

void subsets(char arr[], int n){
    for(int i=0; i<(1 << n); i++){
        // cout << "{";
        for(int j=0; j<n; j++){
            if(isOne(i, j) != 0){
                cout << arr[j] << " ";
            }
        }
        // cout << "}" << endl;
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    subsets(arr, n);

    return 0;
}