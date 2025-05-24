#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int findMin(Node *root)
{
    if (root == NULL)
        return -1;
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

int findMax(Node *root)
{
    if (root == NULL)
        return -1;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

Node *insertIntoBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertIntoBST(root->left, val);
    }
    else
    {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}

int main()
{
    Node *root = NULL;
    int n, val;
    cout << "How many nodes? ";
    cin >> n;
    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        root = insertIntoBST(root, val);
    }

    cout << "Minimum value in BST is: " << findMin(root) << endl;
    cout << "Maximum value in BST is: " << findMax(root) << endl;

    return 0;
}
