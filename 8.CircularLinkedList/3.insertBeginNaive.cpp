#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
    }
};

void printList(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
        cout << p->data << " ";
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    head = insertBegin(head, 5);
    printList(head);

    return 0;
}