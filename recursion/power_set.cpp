#include<iostream>
#include<string>
using namespace std;

void power_set(int arr[], int n, int pos, string val){
    if(pos >= n){
        cout << "{" << val << "}" << endl;
        return;
    }
    power_set(arr, n, pos+1, val);
    power_set(arr, n, pos+1, val+to_string(arr[pos]));
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i ++){
        cin >> arr[i];
    }

    power_set(arr, n, 0, "");

    return 0;
}