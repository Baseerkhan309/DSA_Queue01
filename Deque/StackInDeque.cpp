#include <iostream>
#include <deque>
using namespace std;

// Stack Using Deque

class Stack{
    deque<int> deq;
public:
    void push(int data){
    deq.push_front(data);
    }

    void pop(){
      deq.pop_front();
    }

    int top(){
     return deq.front();

    }

};
int main(){
Stack s;

// Pushing Value n Stack
  for(int i=1; i<=5; i++){
    s.push(i);
  }

  
// Pushing Value n Stack
  for(int i=1; i<=5; i++){
    cout << s.top() << endl;
    s.pop();
  }
    return 0;
}