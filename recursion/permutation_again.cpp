#include<iostream>
#include<string>
using namespace std;

void permutation(string str, int index){
    if(index > = str.size()){
        cout << str << endl;
        return;
    }
    for(int i=0; i<str.size(); i++){
        swap(str[index], str[i]);
        permutation(str, index+1);
        swap(str[index], str[i]);
    }
}

int main(){
    string str;
    cin >> str;

    permutation(str, 0);

    return 0;
}