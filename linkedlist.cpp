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
   
    list.insertAtEnd(30);
    list.insertAtEnd(20);
    list.insertAtEnd(10);
    list.insertAtEnd(00);
    list.insertAtEnd(90);
    list.insertAtBegin(31);
    list.insertAtBegin(31);



    list.display();


    return 0;
}