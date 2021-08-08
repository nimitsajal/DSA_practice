#include<iostream>
#include<string>
using namespace std;

void subsequence(string str, string val){
    if(str.size() <= 0){
        cout << val << endl;
        return;
    }
    subsequence(str.substr(1), val);
    subsequence(str.substr(1), val+str[0]);
}

int main(){
    string str;
    cin >> str;

    subsequence(str, "");

    return 0;
}