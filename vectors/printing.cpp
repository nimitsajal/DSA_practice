#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;  //  initialization

    v.push_back(1); //  inserts new element to end of the vector
    v.push_back(2); //
    v.push_back(3); //

    //  using traditional iterator [i]
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    //  using a vector iterator
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }cout << endl;

    //  using an auto elemnt - like [for element in array](in python)
    for(auto element: v){
        cout << element << " ";
    }cout << endl;

    v.pop_back();   //  deletes last element

    vector<int> v2 (3, 50);

    swap(v, v2);

    for(auto element: v){
        cout << element << " ";
    }cout << endl;

    for(auto element: v2){
        cout << element << " ";
    }cout << endl;

    vector<int> v3;
    v3.push_back(5);
    v3.push_back(4);
    v3.push_back(3);
    v3.push_back(2);
    v3.push_back(1);

    for(auto element: v3){
        cout << element << " ";
    }cout << endl;

    sort(v3.begin(), v3.end());

    for(auto element: v3){
        cout << element << " ";
    }cout << endl;

    return 0;
}