#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

Node *pre = NULL;
Node *BTToDLL(Node *root)
{
    if (root == NULL)
        return root;
    Node *head = BTToDLL(root->left);
    if (pre == NULL)
        head = NULL;
    else
    {
        root->left = pre;
        pre->right = root;
    }
    pre = root;
    BTToDLL(root->right);
    return head;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);

    Node *head = BTToDLL(root);

    return 0;
}