#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

void rotate(int arr[], int n, int k){
    for(int i=0; i<gcd(n, k); i++){
        int j = i;
        int d = -1;
        int temp = arr[0];
        while(1){
            d = (j+k)%n;
            if(d==i){
                break;
            }
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    rotate(arr, n, k);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}