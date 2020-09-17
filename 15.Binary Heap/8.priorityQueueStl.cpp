#include <iostream>
#include <queue>

using namespace std;

struct Person
{
    int age;
    float ht;
    Person(int a, float h)
    {
        age = a;
        ht = h;
    }
};

struct myCmp
{
    bool operator()(Person const &p1, Person const &p2)
    {
        p1.ht < p2.ht;
    }
};

int main()
{
    priority_queue<int> pq; //Max Heap by default
    // priority_queue<int, vector<int>, greater<int>> pq; //Min Heap
    // int arr[] = {10, 5, 15};
    // priority_queue<int> pq(arr, arr + 3);
    pq.push(10);
    pq.push(15);
    pq.push(5);
    // priority_queue<Person, vector<Person>, myCmp> pq;
    cout << pq.size() << endl;
    cout << pq.top() << endl;
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}