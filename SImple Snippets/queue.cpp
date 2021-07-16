#include<iostream>
#include<string>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];

    public:
        Queue(){
            front = -1;
            rear = -1;
            for(int i=0; i<5; i++){
                arr[i] = 0;
            }
        }

        bool isEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(rear == 4){
                return true;
            }
            else{
                return false;
            }
        }

        int count(){
            if(isEmpty()){
                // cout << "QUEUE EMPTY" << endl;
                return 0;
            }
            else{
                int count = rear - front + 1;
                // cout << "Count = " << count << endl;
                return count;
            }
        }

        void enqueue(int num){
            if(isFull()){
                cout << "QUEUE FULL" << endl;
            }
            else{
                if(isEmpty()){
                    rear++;
                    front++;
                    arr[rear] = num;
                }
                else{
                    rear++;
                    arr[rear] = num;
                }
            }
        }

        void dequeue(){
            if(isEmpty()){
                cout << "QUEUE EMPTY" << endl;
            }
            else{
                if(count() == 1){
                    cout << arr[front] << " dequeued from queue." << endl;
                    arr[front] = 0;
                    front = -1;
                    rear = -1;
                }
                else{
                    cout << arr[front] << " dequeued from queue." << endl;
                    arr[front] = 0;
                    front++;
                }
            }
        }

        void display(){
            for(int i=0; i<5; i++){
                cout << arr[i] << ", ";
            }
            cout << endl;
        }
};

int main(){
    Queue q1;
    int option, num;

    do{
        cout << endl << endl;
        cout << "QUEUE OPERATIONS" << endl << endl;

        cout << "Select option: (0 to exit)" << endl << endl;
        
        cout << "[1] - ENQUEUE" << endl;
        cout << "[2] - DEQUEUE" << endl;
        cout << "[3] - ISEMPTY" << endl;
        cout << "[4] - ISFULL" << endl;
        cout << "[5] - COUNT" << endl;
        cout << "[6] - DISPLAY" << endl;
        cout << "[0] - EXIT" << endl;

        cin >> option;

        switch (option)
        {
            case 0:
                break;

            case 1:
                cout << "Enter number to enqueue:" << endl;
                cin >> num;
                q1.enqueue(num);
                break;

            case 2:
                q1.dequeue();
                break;

            case 3:
                if(q1.isEmpty()){
                    cout << "Queue EMPTY" << endl;
                }
                else{
                    cout << "Not Empty" << endl;
                }
                break;
            
            case 4:
                if(q1.isFull()){
                    cout << "Queue FUll" << endl;
                }
                else{
                    cout << "Not Full" << endl;
                }
                break;

            case 5:
                cout << "Count = " << q1.count() << endl;
                break;

            case 6:
                q1.display();
                break;

            default:
            cout << "Incorrect input!!" << endl;
                break;
        }

    }
    while(option != 0);
    

    return 0;
}