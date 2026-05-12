#include <iostream>
#include <queue>
using namespace std;

// InterLeave
void interLeave(queue<int> &org)
{
    int n = org.size();
    queue<int> first;

    for (int i = 0; i < n / 2; i++)
    { // Store Org First Half in First Queue
        first.push(org.front());
        org.pop();
    }

    while (!first.empty())
    { // get Val From First Front and Push In Org And after that get value from org and push in org
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }
}

int main()
{

    queue<int> org;
    for (int i = 1; i <= 10; i++)
    {
        org.push(i);
    }

    interLeave(org);

    for (int i = 1; i <= 10; i++)
    {
        cout << org.front() << " ";
        org.pop();
    }

    cout << endl;

    return 0;
}