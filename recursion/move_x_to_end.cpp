#include<iostream>
#include<string>
using namespace std;

string move_x_to_end(string str){
    if(str.size() == 0){
        return "";
    }
    if(str[0] != 'x'){
        return (str[0] + move_x_to_end(str.substr(1)));
    }
    else{
        return move_x_to_end(str.substr(1)) + 'x';
    }    
}

int main(){
    string str;
    cin >> str;

    cout << move_x_to_end(str);

    return 0;
}




// #include<iostream>
// #include<string>
// using namespace std;

// void move_x_to_end(string str){
//     if(str.size() == 0){
//         return;
//     }
//     if(str[0] != 'x'){
//         // cout << str.size() << endl;
//         move_x_to_end(str.substr(1));
//     }
//     else{
//         // cout << str.size() << endl;
//         // char ch = 'x';
//         // string updated = (str.substr(1) + ch);
//         move_x_to_end(str.substr(1)) + 'x';
//     }
//     cout << str[0];
    
    
// }

// int main(){
//     string str;
//     cin >> str;

//     move_x_to_end(str);

//     return 0;
// }