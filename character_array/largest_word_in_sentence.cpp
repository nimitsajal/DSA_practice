#include<iostream>
using namespace std;

void largest_word(char arr[], int n){
    int Max = 0;
    int cur = 0;
    int i = 0;
    int start = 0;
    int maxStart = 0;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            // Max = max(Max, cur);

            if(cur > Max){
                Max = cur;
                maxStart = start;
            }
            
            // cout << "i = " << i << endl;
            // cout << "Max = " << Max << endl;
            // cout << "cur = " << cur << endl;
            cur = 0;
            // cout << "start = " << maxStart << endl;
            // cout << "end = " << maxStart+Max << endl;
            start = i+1;
            // cout << endl;
        }else{
            cur++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout << "Max length = " << Max << endl;
    for(int i=maxStart; i<maxStart+Max; i++){
        cout << arr[i];
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();

    char arr[n];
    cin.getline(arr, n);
    cin.ignore();

    // cout << arr << endl << endl;

    largest_word(arr, n);

    return 0;
}