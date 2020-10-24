#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
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

Node *sortedMerge(Node *a, Node *b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    Node *head = NULL, *tail = NULL;
    if (a->data <= b->data)
    {
        head = tail = a;
        a = a->next;
    }
    else
    {
        head = tail = b;
        b = b->next;
    }
    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if (a == NULL)
        tail->next = b;
    else
        tail->next = a;
    return head;
}

int main()
{
    Node *a_head = new Node(10);
    a_head->next = new Node(20);
    a_head->next->next = new Node(30);
    a_head->next->next->next = new Node(40);

    Node *b_head = new Node(5);
    b_head->next = new Node(60);
    b_head->next->next = new Node(409);

    Node *head = sortedMerge(a_head, b_head);
    printList(head);

    return 0;
}