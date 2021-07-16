#include<iostream>
#include<string>
using namespace std;

// 7 -> 10 7 4 6 8 10 11
// 9 -> 1 2 3 5 7 11 15 19 23
// 6 -> 1 2 3 5 7 11

void longest_arithmetic_subarray(int arr[], int n, int k){
    int ans = 2;
    int count = 0;
    int diff;
    int currDiff;
    // cout << endl;
    for(int i=0; i<n-1; i++){
        count = 2;
        diff = arr[i+1] - arr[i];
        for(int j=i+2; j<n; j++){
            currDiff = arr[j] - arr[j-1];
            if(currDiff == diff){
                count++;
                // cout << "in IF" <<endl;
                // cout << "diff = " << diff << endl;
                // cout << "currDiff = " << currDiff << endl;
                // cout << "count = " << count << endl;
                // cout << "ans = " << ans << endl;
                // cout << endl;
            }
            else{
                // cout << "in ELSE" <<endl;
                // cout << "diff = " << diff << endl;
                // cout << "currDiff = " << currDiff << endl;
                // cout << "count = " << count << endl;
                // cout << "ans = " << ans << endl;
                // cout << endl;
                break;
            }
            ans = max(ans, count);
        }
        // ans = max(ans, count);
    }
    cout << "Case " << k+1 << ": " << ans << endl;
    
}

int main(){
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        longest_arithmetic_subarray(arr, n, k);
    }
    
    return 0;
}