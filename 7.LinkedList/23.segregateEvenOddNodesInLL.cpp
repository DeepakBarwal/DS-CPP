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

Node *segregate(Node *head)
{
    Node *eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (eS == NULL)
            {
                eS = curr;
                eE = eS;
            }

            else
            {
                eE->next = curr;
                eE = eE->next;
            }
        }
        else
        {
            if (oS == NULL)
            {
                oS = curr;
                oE = oS;
            }
            else
            {
                oE->next = curr;
                oE = oE->next;
            }
        }
    }
    if (oS == NULL || eS == NULL)
        return head;
    eE->next = oS;
    oE->next = NULL;
    return eS;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(20);
    head->next->next = new Node(8);
    head->next->next->next = new Node(5);

    head = segregate(head);
    printList(head);

    return 0;
}