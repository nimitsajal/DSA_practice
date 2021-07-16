#include<iostream>
#include<string>
using namespace std;

string str[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void words(string digits, string ans){
    if(digits.size() == 0){
        cout << ans << endl;
        return;
    }

    char ch = digits[0];
    string code = str[ch-'0'];
    string ros = digits.substr(1);

    for(int i=0; i<code.size(); i++){
        words(ros, ans + code[i]);
    }

    // for(int i=0; i<str[digits[0]-'0'].size(); i++){
    //     words(digits.substr(1), ans + str[digits[0]-'0'][i]);
    // }
}

int main(){
    string digits;
    cin >> digits;

    words(digits, "");

    return 0;
}