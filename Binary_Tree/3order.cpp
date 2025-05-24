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

// Preorder Traversal: Root → Left → Right
void preorder(Node *root)
{
    //base case 
    if (root == NULL)
        return;

    //N L R
    //N
    cout << root->data << " ";
    //L
    preorder(root->left);
    //R
    preorder(root->right);
}

// Inorder Traversal: Left → Root → Right
void inorder(Node *root)
{
    if (root == NULL)
        return;
    //L N R
    //L
    inorder(root->left);
    //N
    cout << root->data << " ";
    //R
    inorder(root->right);
}

// Postorder Traversal: Left → Right → Root
void postorder(Node *root)
{
    if (root == NULL)
        return;
    //L R N
    //L
    postorder(root->left);
    //R
    postorder(root->right);
    //N
    cout << root->data << " ";
}

int main()
{
    // Sample Tree:
    //         1
    //       /   \
    //      2     3
    //     / \   /
    //    4   5 6

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    cout << "Preorder: ";
    preorder(root);
    cout << "\nInorder: ";
    inorder(root);
    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}
