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
    if (root == NULL)
        return new Node(x);
    else if (root->key < x)
        root->right = insert(root->right, x);
    else if (root->key > x)
        root->left = insert(root->left, x);
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
    root = insert(root, 25);
    inorder(root);

    return 0;
}