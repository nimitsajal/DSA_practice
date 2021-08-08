#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> arr, int n){
    int count[100] = {0};
    for(int i=0; i<=n; i++){
        count[arr[i]]++;
    }

    // for(int i=0; i<=n; i++){
    //     cout << count[i] << " ";
    // }

    vector<int> newArr;

    for(int i=0; i<=n; i++){
        while(count[i]>0){
            newArr.push_back(i);
            count[i]--;
        }
    }

    for(int i=1; i<=n; i++){
        cout << newArr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<int> arr(a, a+n);

    countSort(arr, n);

    return 0;
}