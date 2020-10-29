#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse(priority_queue<int> &q)
{
    stack<int> s;
    while (q.empty() == false)
    {
        s.push(q.top());
        q.pop();
    }
    while (s.empty() == false)
    {
        q.push(s.top());
        s.pop();
    }
}

template <typename T>
void printQueue(T &q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> q;
    for (int x : {1, 2, 3, 4, 5})
        q.push(x);

    reverse(q);

    printQueue(q);

    return 0;
}