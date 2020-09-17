#include <iostream>
#include <stack>

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

void iterativePreorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *curr = st.top();
        cout << curr->key << " ";
        st.pop();
        if (curr->right != NULL)
            st.push(curr->right);
        if (curr->left != NULL)
            st.push(curr->left);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    iterativePreorder(root);

    return 0;
}