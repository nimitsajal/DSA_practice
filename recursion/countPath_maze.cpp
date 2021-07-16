#include<iostream>
using namespace std;

int countPath_maze(int n, int i, int j){
    // cout << "n=" << n << " i=" << i << " j=" << j << endl;

    if(i == n-1 && j == n-1){
        return 1;
    }
    if(i >= n || j >= n){
        return 0;
    }
    
    return (countPath_maze(n, i+1, j) + countPath_maze(n, i, j+1));
}

int main(){
    int n;
    cin >> n;

    cout << countPath_maze(n, 0, 0) << endl;

    return 0;
}