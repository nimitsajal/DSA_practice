#include<iostream>
#include<string>
using namespace std;

void remove_duplicates(string str){
    if(str.size() == 0){
        return;
    }
    if(str[0] != str[1]){
        cout << str[0];
    }
    remove_duplicates(str.substr(1));
}

int main(){
    string str;
    cin >> str;

    remove_duplicates(str);

    return 0;
}