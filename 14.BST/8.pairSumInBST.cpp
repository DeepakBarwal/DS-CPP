#include <iostream>
#include <unordered_set>

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

bool isPairSum(Node *root, int sum, unordered_set<int> &s)
{
    if (root == NULL)
        return false;
    if (isPairSum(root->left, sum, s) == true)
        return true;
    if (s.find(sum - root->key) != s.end())
        return true;
    else
        s.insert(root->key);
    return isPairSum(root->right, sum, s);
}

int main()
{

    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(40);
    root->right->left = new Node(35);

    unordered_set<int> s;
    cout << boolalpha << isPairSum(root, 33, s) << endl;

    return 0;
}