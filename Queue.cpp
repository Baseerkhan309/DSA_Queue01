#include <iostream>
using namespace std;

// Queue First implementation
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};

class Queue{
   Node* head;
   Node* tail;
public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
     Node* newnode = new Node(data);
     if(head == NULL){
        head = tail = newnode;
     }else{ // Queue Implementation
        tail->next = newnode;
        tail = newnode;
     }
    }

    void pop(){
        if(empty()){
        cout << "Queue Is Empty\n";
        return;
    }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
     return head->data;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

while(!q.empty()){
    cout << q.front() << endl;
    q.pop();
}
    return 0;
}