#include<iostream>
#include<math.h>
using namespace std;

int getBit(int num, int pos){
    return (num & (1 << pos));
}

int setBit(int num, int pos){
    return (num | (1 << pos));
}

void unique(int arr[], int n){
    // int maxBit = 0;
    // for(int i=0; i<n; i++){
    //     maxBit = max(maxBit, (int)log2(arr[i]+1));
    // }
    // int maxBit = (int)log2(arr[i]+1);
    // int maxBit = 64;
    // int newArr[64] = {0};
    int result = 0;
    for(int i=0; i<64; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j], i) != 0){
                // newArr[i] = (newArr[i]+1);
                sum++;
                // cout << "i = " << i << " arr[j] = " << arr[j] << " new = " << newArr[i] << " " << endl;
            }
        }
        // cout << endl;
        // if(newArr[i] != 0){
        //     cout << arr[i] << endl;
            // break;
        // }
        if((sum%3 != 0)){
            result = setBit(result, i);
        } 
    }
    cout << result << endl;

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    unique(arr, n);

    return 0;
}