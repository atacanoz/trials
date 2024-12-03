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
        new_node->next = head;
        this->head = new_node;
    }

    void display(){
        Node* temp = this->head;
        while (temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
        delete temp;
    }

};



int main(){

    LinkedList list;
    list.insertAtBegin(10);
    list.insertAtBegin(20);
    list.insertAtBegin(30);
    list.insertAtBegin(40);
    list.insertAtBegin(50);
    list.display();


    return 0;
}