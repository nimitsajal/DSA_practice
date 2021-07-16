#include<iostream>
#include<string>
using namespace std;

int main(){
    string a = "hgFYCYfghjk";
    string upper = a;
    string lower = a;
    for(int i=0; i<a.size(); i++){
        if(a[i] >='a' && a[i] <= 'z'){
            upper[i] = a[i] - 32;
            lower[i] = a[i];
        }else{
            lower[i] = a[i] + 32;
            upper[i] = a[i];
        }
    }
    cout << "UPPER -> " << upper << endl;
    cout << "LOWER -> " << lower << endl;


    return 0;
}