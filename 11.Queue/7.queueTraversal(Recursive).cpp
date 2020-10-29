#include <iostream>
#include <queue>
using namespace std;

void reverse(priority_queue<int> &q)
{
    if (q.empty())
        return;
    int x = q.top();
    q.pop();
    reverse(q);
    q.push(x);
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
    for (int x : {1, 2, 3, 4})
        q.push(x);

    reverse(q);

    printQueue(q);

    return 0;
}