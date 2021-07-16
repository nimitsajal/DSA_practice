#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        // cout << xorsum << endl;
        xorsum = (xorsum ^ arr[i]);
    }
    return xorsum;
}

int getSetBit(int temp, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = (temp & (1<<i));
        // cout << "ans = " << ans << endl;
        if(ans != 0){
            return i;
            break;
        }
    }
    return 0;
}

int getBit(int num, int pos){
    return (num & (1 << pos));
}

void uniques(int arr[], int n){
    int temp = unique(arr, n);
    // cout << temp << endl;

    int setbitPos = getSetBit(temp, n);
    // cout << setbit << endl;

    int xorsum = 0;
    for(int i=0; i<n; i++){
        if(getBit(arr[i], setbitPos) != 0){
            xorsum = (xorsum ^ arr[i]);
        }
    }
    int ans_1 = xorsum;
    int ans_2 = (ans_1 ^ temp);
    cout << ans_1 << " " << ans_2 << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    uniques(arr, n);

    return 0;
}