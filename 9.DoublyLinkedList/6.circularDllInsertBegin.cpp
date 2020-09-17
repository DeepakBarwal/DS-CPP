#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
    Node(int d)
    {
        data = d;
        next = prev = NULL;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
}

int main()
{
    Node *head = insertBegin(head, 10);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    printList(head);

    return 0;
}