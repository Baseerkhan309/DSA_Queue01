#include <iostream>
#include <stack>
using namespace std;

// Queue Using 2 stacks
class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    // Push Method
    void push(int data)
    {

        // s1 -> s2
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);

        // s2 -> s1
        while (!s2.empty()){
        
            s1.push(s2.top());
            s2.pop();
        }
        //s2.push(data);
    }

    // pop Method :
    void pop(){
         s1.pop();
    }

    // front Method
    int front(){
        return s1.top();

    }

    bool empty(){
        return s1.empty();
    }
};

int main(){
Queue q;
q.push(1);
q.push(2);
q.push(3);

// Print 
while(!q.empty()){
    cout << q.front() << endl;
    q.pop();
}
    return 0;
}