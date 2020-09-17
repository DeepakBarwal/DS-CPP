#include <iostream>

using namespace std;

struct Queue
{
    int size, cap, *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull()
    {
        return size == cap;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void enque(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    void deque()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return 0;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return size - 1;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.display();
    q.deque();
    q.enque(50);
    q.display();
    return 0;
}