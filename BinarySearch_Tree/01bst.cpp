#include <iostream>
#include <queue>
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
        left = right = NULL;
    }
};

Node *insertIntoBST(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (root->data > val)
    {
        root->left = insertIntoBST(root->left, val);
    }
    else
    {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    // N L R
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    // L N R
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;
    // L R N
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        cout << front->data << " ";

        if (front->left)
            q.push(front->left);
        if (front->right)
            q.push(front->right);
    }
}

void takeInput(Node *&root)
{
    int val;
    cin >> val;

    while (val != -1)
    {
        insertIntoBST(root, val);
        cin >> val;
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter values to create BST (-1 to stop): " << endl;
    takeInput(root);

    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nInorder: ";
    inorder(root);
    cout << "\nPostorder: ";
    postorder(root);
    cout << "\nLevel Order: ";
    levelOrder(root);
    cout << endl;

    return 0;
}
