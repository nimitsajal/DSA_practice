#include<iostream>  // for INPUT/OUTPUT
#include<string>    //  for using STRING
#include<algorithm> //  for using ALL ALGORITHMS -> like SORT, etc
using namespace std;

int main(){
    //  CLEAR
    string s1 = "my name is nimit sajal";
    cout << s1 << endl;
    s1.clear();     //  clears/deletes the values of the string varaible
    cout << s1 << endl << endl;

    string s2 = "abc";
    string s3 = "xyz";
    cout << s2.compare(s3) << endl << endl;     //  compares values of both strings -> [s2-s3] = negative value, cuz, s2 is smaller than s3


    //  COMPARE
    if(!s2.compare(s3)){    //  if(s2.comnpare(s3) == 0) -> if they will be equal
        cout << "EQUAL" <<endl;
    }
    else{
        cout << "NOT Equal" << endl;
    }
    cout << endl;


    //  EMPTY
    string s4 = "nimsnimsnims";
    if(s4.empty()){     //  checks if the string is empty or not
        cout << "s4 is EMPTY" << endl;
    }
    else{
        cout << "s4 is NOT Empty" << endl;
    }
    s4.clear();     //  clears s4
    if(s4.empty()){
        cout << "s4 is EMPTY" << endl;
    }
    else{
        cout << "s4 is NOT Empty" << endl;
    }
    cout << endl;


    //  ERASE
    string s5 = "nincompoop";
    cout << "before erasing = " << s5 << endl;
    s5.erase(3, 3);     //  erases characters in string -> s.erase(i, j) -> [i = staring index, j = no. of elements]
    cout << "after erasing = " << s5 << endl << endl;


    //FIND
    string s6 = "oo";
    cout << s5.find(s6) << endl;    //  return starting index of the substring (if present in main string) or returns garbage value (if substring not present in main string)
    cout << s5.find("com") << endl << endl;


    //  INSERT
    string s7 = "lol";
    s5.insert(3, s7);   // inserts another string in between a main string -> s.insert(i, s)/s.insert(i, "str") -> [i = stratinf index of string to be inserted, s = the substring to be inserted]
    cout << s5 << endl << endl;


    //  SIZE/LENGTH (same thing)
    cout << "size of '" << s5 << "' = " << s5.size() << endl;       //  returns size of string
    cout << "length of '" << s5 << "' = " << s5.length() << endl;   //  returns length of string
    //  useful in iterating
    for(int i=0; i<s5.length(); i++){
        cout << "char s5[" << i << "] = " << s5[i] << endl;
    }
    cout << endl;


    //  SUBSTR
    cout << s5.substr(6, 4) << endl;    //  s.substr(i, j) -> [i = string index of substring, j = no. of elements]


    //  STOI
    string s8 = "99";
    cout << "string = " << s8 << endl;
    int x = stoi(s8);   //  Converts strings to integers
    cout << "int = " << x << endl;
    cout << "incremented int = " << x+1 << endl << endl;


    //  TOSTRING
    string s9 = to_string(x);
    cout << "int = " << x << endl;
    cout << "string = " << s9 << endl;
    cout << "appended string = " << s9+"!!!" << endl << endl;


    //  BEGIN & END -> array/string pointers (as seen in pointers topic)
    //  [begin] points to starting index of the string
    //  [end] points to the "position after ending index" of the string
    //  ** these are pointers/iterators, not integers **
    cout << "beginning index = " << *s5.begin() << endl;
    cout << "ending index = " << *(s5.end()-1) << endl << endl;



    //  SORT (use "#include<algotithm>")
    //  ** returns nothing **
    //  takes 2 parameters -> [str.begin(), str.end()]
    //  sorts string "str"
    string s10 = "sdfghjkloiuytreszxcvbn";
    cout << "only small [unsorted] = " << s10 << endl;
    sort(s10.begin(), s10.end());
    cout << "only small [sorted] = " << s10 << endl;
    string s11 = "AASDGUFYDhufiehHIUFUGjihig";
    cout << "mixed [unsorted] = " << s11 << endl;
    sort(s11.begin(), s11.end());
    cout << "mixed [sorted] = " << s11 << endl << endl;
    

    //  TRANSFORM
    //  transform(starting index{string}, ending index{string}, starting index{for operation to be performed}, ::toupper{operation});
    string s12 = "asdfDFGasdGHJ";
    cout << "Original -> " << s12 << endl;
    transform(s12.begin(), s12.end(), s12.begin(), ::toupper);
    cout << "Upper -> " << s12 << endl;
    transform(s12.begin(), s12.end(), s12.begin(), ::tolower);
    cout << "Lower -> " << s12 << endl << endl;

    return 0;
}