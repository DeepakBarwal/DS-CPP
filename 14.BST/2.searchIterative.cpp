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
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key < x)
            root = root->right;
        else
            root = root->left;
    }
    return false;
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

    cout << boolalpha << search(root, 40) << endl;

    return 0;
}