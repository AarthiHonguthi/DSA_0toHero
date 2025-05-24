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
        this->left = NULL;
        this->right = NULL;
    }
};
// Returns Root node of Tree
Node *createTree()
{
    cout << "Enter the value for Node: " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    // Step1: create Node
    Node *root = new Node(data);
    

    // Create Left Subtree
    cout << "For Left Tree:" << root->data << endl;
    root->left = createTree();

    // Create Right Subtree
    cout << "For Right Tree:" << root->data << endl;
    root->right = createTree();

    return root;
}

int main()
{
    Node *root = createTree();
    cout << root->data << endl;
    return 0;
}
