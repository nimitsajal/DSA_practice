#include<iostream>
#include<string>
using namespace std;

void subsequence(string str, string ans){
    if(str.size() == 0){
        cout << ans << endl;
        return;
    }

    subsequence(str.substr(1), ans);
    subsequence(str.substr(1), ans+str[0]);
}

int main(){
    string str;
    cin >> str;

    subsequence(str, "");

    return 0;
}