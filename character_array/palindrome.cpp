#include<iostream>
using namespace std;

bool check_palindrome(char arr[], int n){
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;
    cout << "char array = " << arr << endl;

    if(check_palindrome(arr, n)){
        cout << arr << " is a PALINDROME" << endl;
    }
    else{
        cout << arr << " is NOT a Palindrome" << endl;
    }

    return 0;
}