#include<iostream>
using namespace std;

int getBit(int num, int i){
    return (num & (1 << i));
}

bool checkPowerOf2(int num, int n){
    int bit;
    int no_of_ones = 0;
    for(int i=0; i<n; i++){
        bit = getBit(num, i);
        // cout << "Bit = " << bit << endl;
        if(bit != 0){
            no_of_ones++;
        }
    }
    // cout << "ones = " << no_of_ones << endl;
    if(no_of_ones <= 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num, n;
    cin >> num >> n;

    //shortcut
    if((num & (num-1)) == 0){
        cout << num << " is a POWER of 2" << endl;
    }
    else{
        cout << num << " is NOT a Power of 2" << endl;
    }

    //longcut
    // if(checkPowerOf2(num, n)){
    //     cout << num << " is a POWER of 2" << endl;
    // }
    // else{
    //     cout << num << " is NOT a Power of 2" << endl;
    // }

    return 0;
}