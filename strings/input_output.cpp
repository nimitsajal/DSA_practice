#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1;
    cin >> str1;    //  one word only
    cout << str1 << endl;

    string str2 = "nimit sajal";    // can initialise and declare "multiple words" together
    cout << str2 << endl;

    string str3(10, 'Z');   //  initialise and declare "size" and "value" for each element
    cout << str3 << endl;

    string str4;
    getline(cin, str4);     // multiple words input
    cout << str4 << endl;

    return 0;
}