#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int arr[5];

    public:
        Stack(){
            top = -1;
            for(int i=0; i<5; i++){
                arr[i] = 0;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(top == 4){
                return true;
            }
            else{
                return false;
            }
        }

        void push(int num){
            if(isFull()){
                cout << "OVERFLOW" << endl;
            }
            else{
                top++;
                arr[top] = num;
                cout << num << " is pushed to the stack." << endl;
            }
        }

        void pop(){
            if(isEmpty()){
                cout << "UNDERFLOW" << endl;
            }
            else{
                cout << arr[top] << " popped out of stack." << endl;
                arr[top] = 0;
                top--;
            }
        }

        void peek(int pos){
            if(pos > -1 && pos <=5){
                cout << "value at " << pos << " = " << arr[pos] << endl;
            }
            else{
                cout << "Postion out of range." << endl;
            }
        }

        void count(){
            if(isEmpty()){
                cout << "UNDERFLOW" << endl;
            }
            else{
                cout << "Count = " << top+1 << endl;
            }
        }

        void change(int pos, int num){
            if(isEmpty()){
                cout << "UNDERFLOW" << endl;
            }
            else{
                int prev = arr[pos];
                arr[pos] = num;
                cout << "Value at " << pos << " changed from " << prev << " to " << num << endl;
            }
        }

        void display(){
            if(isEmpty()){
                cout << "UNDERFLOW" << endl;
            }
            else{
                for(int i=0; i<5; i++){
                    cout << arr[i] << ", ";
                }
                cout << endl;
            }
        }
};

int main(){
    Stack s1;
    int option, pos, num;

    do{
        cout << endl << endl;
        cout << "STACK OPERATIONS" << endl << endl;

        cout << "Select option: (0 to exit)" << endl << endl;
        
        cout << "[1] - PUSH" << endl;
        cout << "[2] - POP" << endl;
        cout << "[3] - ISEMPTY" << endl;
        cout << "[4] - ISFULL" << endl;
        cout << "[5] - PEEK" << endl;
        cout << "[6] - COUNT" << endl;
        cout << "[7] - CHANGE" << endl;
        cout << "[8] - DISPLAY" << endl;
        cout << "[0] - EXIT" << endl;

        cin >> option;

        switch (option)
        {
            case 0:
                break;

            case 1:
                cout << "Enter number to push:" << endl;
                cin >> num;
                s1.push(num);
                break;

            case 2:
                s1.pop();
                break;

            case 3:
                if(s1.isEmpty()){
                    cout << "Stack EMPTY" << endl;
                }
                else{
                    cout << "Not Empty" << endl;
                }
                break;
            
            case 4:
                if(s1.isFull()){
                    cout << "Stack FUll" << endl;
                }
                else{
                    cout << "Not Full" << endl;
                }
                break;

            case 5:
                cout << "Enter position to peek:" << endl;
                cin >> pos;
                s1.peek(pos);
                break;

            case 6:
                s1.count();
                break;

            case 7:
                cout << "Enter position for change:" << endl;
                cin >> pos;
                cout << "Enter new number:" << endl;
                cin >> num;
                s1.change(pos, num);
                break;

            case 8:
                s1.display();
                break;

            default:
            cout << "Incorrect input!!" << endl;
                break;
        }

    }
    while(option != 0);

    return 0;
}