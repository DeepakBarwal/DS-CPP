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

int preIndex = 0;
Node *cTree(int in[], int pre[], int is, int ie)
{
    if (is > ie)
        return NULL;
    Node *root = new Node(pre[preIndex++]);
    int inIndex;
    for (int i = is; i <= ie; i++)
    {
        if (in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }
    root->left = cTree(in, pre, is, inIndex - 1);
    root->right = cTree(in, pre, inIndex + 1, ie);
    return root;
}

void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{

    int in[] = {20, 10, 40, 30, 50};
    int pre[] = {10, 20, 30, 40, 50};

    Node *root = cTree(in, pre, 0, 4);

    preorder(root);

    return 0;
}