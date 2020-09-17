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

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    else if (root->key == x)
        return true;
    else if (root->key > x)
        return search(root->left, x);
    else
        return search(root->right, x);
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
    cout << boolalpha << search(root, 35) << endl;

    return 0;
}