#include <iostream>

using namespace std;

struct Queue
{
    int front, cap, size, *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        arr = new int[cap];
    }
    bool isFull()
    {
        return cap == size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return front;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return (front + size - 1) % cap;
    }
    void enque(int x)
    {
        if (isFull())
            return;
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }
    void deque()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
    void display()
    {
        int rear = getRear();
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else
        {
            int i = front;
            while (i < size)
            {
                cout << arr[i] << " ";
                i++;
            }
            i = 0;
            while (i <= rear)
            {
                cout << arr[i] << " ";
                i++;
            }
        }
        cout << endl;
    }
};

int main()
{
    Queue q(4);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.display();
    q.deque();
    q.deque();
    q.display();
    q.enque(50);
    q.display();
    q.deque();
    q.display();

    return 0;
}