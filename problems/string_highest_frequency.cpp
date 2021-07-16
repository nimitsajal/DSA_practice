#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "qwertyuioplkjhgfdsazxcvbnmmjhgresxcfgyuiokjhgfd";
    int freq[26] = {0};

    for(int i=0; i<str.size(); i++){
        freq[str[i]-'a']++;
    }
    int Max = 0;
    int index = 0;
    for(int i=0; i<26; i++){
        if(freq[i] > Max){
            Max = freq[i];
            index = i+'a';
        }
    }

    cout << "Max frequency = " << Max << endl;
    cout << "Letter = " << (char)index << endl; 

    return 0;
}