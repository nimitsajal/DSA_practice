#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "fam";
    string s2 = "ily";

    // #1 -> use "appendd" function
    s1.append(s2);
    cout << s1 << endl;

    // #2 -> use "+" operator to append
    s1 = s1+s2;
    cout << s1 << endl;

    // #3 -> dont append, just print the added values of both strings in output as 1 string
    cout << s1+s2 << endl;

    return 0;
}