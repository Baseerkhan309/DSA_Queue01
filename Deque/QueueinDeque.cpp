#include <iostream>
#include <deque>
#include <queue>
using namespace std;

// Queue Using Deque
class Queue{
    deque<int> deq;

    void push(int data){
      deq.push_back(data);
    }

    void pop(){
      deq.pop_front();
    }

    int front(){
     return deq.front();
    }

    bool empty(){
        return deq.empty();
    }
};
int main(){
queue<int> q;

// Loop For Pushing 
for(int i=1; i<=5; i++){
    q.push(i);
}

// Loop For Printing 
for(int i=1; i<=5; i++){
   cout << q.front() <<  endl;;
   q.pop();
}




    return 0;
}