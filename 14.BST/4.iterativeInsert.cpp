#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL, *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
            curr = curr->left;
        else if (curr->key < x)
            curr = curr->right;
        else
            return root;
    }
    if (parent == NULL)
        return temp;
    if (parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(15);
    root->right = new Node(30);
    root->left->left = new Node(12);
    root->left->right = new Node(18);
    root->right->right = new Node(40);
    root->right->right->left = new Node(35);
    inorder(root);
    root = insert(root, 41);
    inorder(root);

    return 0;
}