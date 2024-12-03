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

};



int main(){

    return 0;
}