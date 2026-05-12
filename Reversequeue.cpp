#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Reverse The Queue
void reverse(queue<int> &q){ //Push Value To Stack
    stack<int> s;
    while(!q.empty()){
    s.push(q.front());
    q.pop();
    }
    
    while(!s.empty()){ // Push Value From Stack To Queue
        q.push(s.top());
        s.pop();
    }
}


int main(){
  queue<int> q;
  for(int i=1; i<=5; i++){
    q.push(i);
  }

  reverse(q);

   for(int i=0; i<5; i++){
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;



    return 0;
}