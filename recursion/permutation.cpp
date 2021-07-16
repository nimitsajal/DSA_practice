#include<iostream>
#include<string>
using namespace std;

void permutation(string str, string ans){
    if(str.size() == 0){
        cout << ans << endl;
        return;
    }

    for(int i=0; i<str.size(); i++){
        string ros = str.substr(0, i) + str.substr(i+1);
        permutation(ros, ans + str[i]);
    }
    
}

int main(){
    string str;
    cin >> str;

    permutation(str, "");

    return 0;
}