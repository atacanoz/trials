#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){ 
        this->data = data;
        this->next = nullptr;
    }



};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        this->head = nullptr;
    }

    void insertAtBegin(int new_data){
        Node* new_node = new Node(new_data);
        new_node->next = this->head;
        this->head = new_node;
    }

    void insertAtEnd(int new_data){
        if(this->head == nullptr){
            this->insertAtBegin(new_data);
            return;
        }
        Node* new_node = new Node(new_data);
        Node* temp = this->head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void insertAtIndex(int new_data, int index){
        if(index == 0){
            this->insertAtBegin(new_data);
            return;
        }
        if(index > this->size() || 0 > index){
            cout << "index out of range" << endl;
            return;
        }
        Node* temp = this->head;
        for(int i=0; i<index-1; i++){
            temp = temp->next;
        }
        Node* new_node = new Node(new_data);
        new_node->next = temp->next;
        temp->next = new_node;
    }

    int size(){
        int count = 0;
        Node* temp = this->head;
        while(temp != nullptr){
            count ++;
            temp = temp->next;
        }
        return count;
    }

    void display(){
        Node* temp = this->head;
        while (temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }







};



int main(){

    LinkedList list;
    list.insertAtEnd(50);
    
    
    list.display();
    list.insertAtIndex(31,0);
    list.display();


    return 0;
}