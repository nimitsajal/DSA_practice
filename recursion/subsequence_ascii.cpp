#include<iostream>
#include<string>
using namespace std;

void subsequence_ascii(string str, string ans){
    if(str.size() == 0){
        cout << ans << endl;
        return;
    }

    subsequence_ascii(str.substr(1), ans);
    subsequence_ascii(str.substr(1), ans + str[0]);
    subsequence_ascii(str.substr(1), ans + to_string((int)str[0]));
}

int main(){
    string str;
    cin >> str;

    subsequence_ascii(str, "");

    return 0;
}