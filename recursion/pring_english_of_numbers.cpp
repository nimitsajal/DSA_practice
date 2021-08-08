#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print(int n, vector<string> eng){
    if(n == 0){
        return;
    }

    print(n/10, eng);

    n = n%10;
    cout << eng[n] << " ";
}

int main(){
    int n;
    cin >> n;

    vector<string> eng;
    eng.push_back("Zero");
    eng.push_back("One");
    eng.push_back("Two");
    eng.push_back("Three");
    eng.push_back("Four");
    eng.push_back("Five");
    eng.push_back("Six");
    eng.push_back("Seven");
    eng.push_back("Eight");
    eng.push_back("Nine");

    print(n, eng);

    return 0;
}