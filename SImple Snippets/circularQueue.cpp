#include<iostream>
#include<string>
using namespace std;

class CircularQueue{
    private:
        int front;
        int rear;
        int arr[5];

    public:
        CircularQueue(){
            front = -1;
            rear = -1;
            for(int i=0; i<5; i++){
                arr[i] = 0;
            }
        }

        bool isFull(){
            if(front == (rear+1)%5){
                return true;
            }
            else{
                return false;
            }
        }

        bool isEmpty(){
            if(rear == -1 && front == -1){
                return true;
            }
            else{
                return false;
            }
        }

        void enqueue(int num){
            if(isFull()){
                cout << "QUEUE FULL" << endl;
            }
            else{
                if(isEmpty()){
                    front = (front+1)%5;
                    rear = (rear+1)%5;
                    arr[rear] = num;
                }
                else{
                    rear = (rear+1)%5;
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
                    cout << arr[front] << " dequeued." << endl;
                    arr[front] = 0;
                    rear = -1;
                    front = -1;
                }
                else{
                    cout << arr[front] << " dequeued." << endl;
                    arr[front] = 0;
                    front = (front+1)%5;
                }
            }
        }

        int count(){
            if(isEmpty()){
                return 0;
            }
            else if(isFull()){
                return 5;
            }
            else{
                return rear-front+1;
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
    CircularQueue cq1;
    int option, num;

    do
    {
        cout << endl << endl;
        cout << "CIRCULAR QUEUE OPERATIONS" << endl << endl;

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
                cq1.enqueue(num);
                break;

            case 2:
                cq1.dequeue();
                break;

            case 3:
                if(cq1.isEmpty()){
                    cout << "Queue EMPTY" << endl;
                }
                else{
                    cout << "Not Empty" << endl;
                }
                break;
            
            case 4:
                if(cq1.isFull()){
                    cout << "Queue FUll" << endl;
                }
                else{
                    cout << "Not Full" << endl;
                }
                break;

            case 5:
                cout << "Count = " << cq1.count() << endl;
                break;

            case 6:
                cq1.display();
                break;

            default:
            cout << "Incorrect input!!" << endl;
                break;
        }
    } while (option != 0);
    

    return 0;
}