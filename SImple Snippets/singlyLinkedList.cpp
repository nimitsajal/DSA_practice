#include<iostream>
#include<string>
using namespace std;

class node{
    public:
        int data;
        node *next;
        
        node(){
            next = NULL;
        }
};

class singlyLinkedList{
    node *head;
    public:
        singlyLinkedList(){
            head = NULL;
        }

        void insert_at_beginning(int data){
            node *temp = new node();
            temp -> data = data;
            temp -> next = head;
            head = temp;
        }

        void insert_at_end(int data){
            node *temp = new node();
            temp -> data = data;
            if(head == NULL){
                head = temp;
            }
            else{
                node *ptr = head;
                while(ptr -> next != NULL){
                    ptr = ptr -> next;
                }
                ptr -> next = temp;
            }
        }

        void insert_at_pos(int data, int pos){
            node *temp = new node();
            temp -> data = data;
            if(pos == 0){
                temp -> next = head;
                head = temp;
            }
            else{
                node *ptr = head;
                for(int i=0; i<pos-1; i++){
                    ptr = ptr -> next;
                }
                temp -> next = ptr -> next;
                ptr -> next = temp;
            }
        }

        void delete_at_beginning(){
            if(head == NULL){
                cout << "Linked List Empty" << endl;
            }
            else{
                node *temp = head;
                head = head -> next;
                delete(temp);
            }
        }

        void delete_at_end(){
            if(head == NULL){
                cout << "Linked List Empty" << endl;
            }
            else if(head -> next == NULL){
                delete(head);
                head = NULL;
            }
            else{
                node *ptr = head;
                while(ptr -> next -> next != NULL){
                    ptr = ptr -> next;
                }
                delete(ptr -> next);
                ptr -> next = NULL;
            }
        }

        void delete_at_pos(int pos){
            if(pos == 0){
                delete_at_beginning();
            }
            else{
                node *ptr = head;
                node *temp = head;
                for(int i=0; i<pos-1; i++){
                    ptr = ptr -> next;
                }
                temp = ptr -> next;
                ptr -> next = temp -> next;
                delete(temp);
            }
        }

        void display(){
            if(head == NULL){
                cout << "Linked List Empty" << endl;
            }
            else{
                node *temp = head;
                while(temp != NULL){
                    cout << temp -> data << " -> ";
                }
                cout << endl;
            }
        }
};

int main() {
	
	printf("1 to Insert at the beginning");
	printf("\n2 to Insert at the end");
	printf("\n3 to Insert at mid");
	printf("\n4 to Delete from beginning");
	printf("\n5 to Delete from the end");
	printf("\n6 to Delete from mid");
	printf("\n7 to Display");
	printf("\n0 to Exit");
	
	int choice,v,p;
	singlyLinkedList ll;
	do {
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"Enter Element: ";
				cin>>v;
				ll.insert_at_beginning(v);
				break;
				
			case 2:
				cout<<"Enter Element: ";
				cin>>v;
				ll.insert_at_end(v);
				break;
				
			case 3:
				cout<<"Enter Element: ";
				cin>>v;
				cout<<"Enter Position ( zero-indexed ): ";
				cin>>p;
				ll.insert_at_pos(v,p);
				break;
				
			case 4:
				ll.delete_at_beginning();
				break;
				
			case 5:
				ll.delete_at_end();
				break;
				
			case 6:
				cout<<"Enter Position ( zero-indexed ): ";
				cin>>p;
				ll.delete_at_pos(p);
				break;
				
			case 7:
				ll.display();
				break;
				
		}
	} while (choice != 0);

    return 0;
}