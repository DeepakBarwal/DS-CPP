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

int res = 0;
int height(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    res = max(res, (lh + rh + 1));
    return (1 + max(lh, rh));
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(60);
    root->right->right->right = new Node(70);
    root->right->left = new Node(40);
    root->right->left->left = new Node(50);

    cout << height(root) << endl;

    return 0;
}