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

Node *floor(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
            return root;
        else if (root->key > x)
            root = root->left;
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(30);

    Node *res = floor(root, 12);
    cout << res->key << endl;

    return 0;
}