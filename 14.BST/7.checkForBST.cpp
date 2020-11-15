#include <iostream>
#include <climits>

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

int prev1 = INT_MIN;
bool isBST(Node *root)
{
    if (root == NULL)
        return true;
    if (isBST(root->left) == false)
        return false;
    if (root->key <= prev1)
        return false;
    prev1 = root->key;
    return isBST(root->right);
}

int main()
{

    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(30);
    root->right->left = new Node(18);
    root->right->right = new Node(35);

    cout << boolalpha << isBST(root) << endl;

    return 0;
}