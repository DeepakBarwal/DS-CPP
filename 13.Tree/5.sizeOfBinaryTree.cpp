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

int getSize(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + getSize(root->left) + getSize(root->right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    cout << getSize(root) << endl;

    return 0;
}