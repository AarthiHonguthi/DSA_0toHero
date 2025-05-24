#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

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

// Implement this function
Node *deleteNode(Node *root, int key)
{
    if(root == NULL) return NULL;
    if(key > root->data){
        return deleteNode(root->right, key);
    }
    else if(key < root->data){
        return deleteNode(root->left, key);
    }
    else{
        //if you find node
        
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = NULL;

    // Insert nodes
    root = insertIntoBST(root, 50);
    root = insertIntoBST(root, 30);
    root = insertIntoBST(root, 70);
    root = insertIntoBST(root, 20);
    root = insertIntoBST(root, 40);
    root = insertIntoBST(root, 60);
    root = insertIntoBST(root, 80);

    int key = 50; // Node to delete

    root = deleteNode(root, key);

    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
