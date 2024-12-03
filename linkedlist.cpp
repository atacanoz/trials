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

    void deleteFromBegin(){
        if(this->head == nullptr){
            cout << "list is already empty" << endl;
            return;
        }
        this->head = this->head->next;
    }
    
    void deleteFromEnd(){
        if(this->head == nullptr){
            cout << "list is already empty"<< endl;
            return;
        }

        if(this->head->next == nullptr){
            this->head = nullptr;
            return;
        }

        Node* temp = this->head;
        while(temp->next->next != nullptr){
            temp = temp -> next;
        }
        temp -> next = nullptr;
    }

    void deleteAtIndex(int index){
        if(this->head == nullptr){
            cout << "already empty" << endl;
            return;
        }
        if(this->size()<=index || index<0){
            cout << "index out of range" << endl;
            return;
        }

        if(index == 0){
            this->deleteFromBegin();
            return;
        }
        Node* temp = this->head;
        for(int i = 0; i<index-1; i++){
            temp = temp -> next;
        }
        temp->next = temp->next->next;
    }

    bool search(int wanted_data){
        Node* temp = this -> head;
        while(temp != nullptr){
            if(temp->data == wanted_data){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void reverse(){
        if(this->head == nullptr){
            cout << "list is empty" << endl;
            return;
        }
        Node* temp = this -> head;
        Node* aftr = temp->next;
        Node* prev = nullptr;
        while(temp->next != nullptr){
            temp->next = prev;
            prev = temp;
            temp = aftr;
            aftr = aftr->next;
        }
        temp -> next = prev;
        this->head = temp;
    }

};



int main(){

    LinkedList list;
    
    return 0;
}