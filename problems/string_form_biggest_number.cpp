#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string num = "435261";
    cout << "Unsorted = " << num << endl;
    sort(num.begin(), num.end());   //  normal SORT
    cout << "Sorted = " << num << endl;
    sort(num.begin(), num.end(), greater<int>());   //  sorting in DESCENDING order
    cout << "Biggest number = " << num << endl;

    return 0;
}