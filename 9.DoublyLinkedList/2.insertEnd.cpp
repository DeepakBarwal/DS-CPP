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

Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}

int main()
{
    Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->prev = head;
    // head->next->next = new Node(30);
    // head->next->next->prev = head->next;
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    printList(head);

    return 0;
}