#include<iostream>
#include<string>
using namespace std;

void replace(string str){
    if(str.size() == 0){
        return;
    }
    if(str[0] == 'p' && str[1] == 'i'){
        cout << "3.14";
        replace(str.substr(2));
    }
    else{
        cout << str[0] ;
        replace(str.substr(1));
    }
    
}

int main(){
    string str;
    cin >> str;

    replace(str);

    return 0;
}