#include <iostream>
#include <vector>
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

const int EMPTY = -1;
void serialize(Node *root, vector<int> &arr)
{
    if (root == NULL)
    {
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(root->key);
    serialize(root->left, arr);
    serialize(root->right, arr);
}

int index = 0;
Node *deSerialize(vector<int> &arr)
{
    if (index == arr.size())
        return NULL;
    int val = arr[index];
    index++;
    if (val == EMPTY)
        return NULL;
    Node *root = new Node(val);
    root->left = deSerialize(arr);
    root->right = deSerialize(arr);
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

    Node *root = new Node(10);
    root->left = new Node(20);

    vector<int> v;
    serialize(root, v);

    for (int x : v)
        cout << x << " ";

    cout << endl;

    Node *tree = deSerialize(v);

    preorder(tree);

    return 0;
}