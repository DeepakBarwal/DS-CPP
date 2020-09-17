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
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    if (head != NULL)
        head->prev = temp;
    return temp;
}

int main()
{
    Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->prev = head;
    // head->next->next = new Node(30);
    // head->next->next->prev = head->next;
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    printList(head);

    return 0;
}