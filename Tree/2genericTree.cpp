#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;

    Node(int data)
    {
        this->data = data;
    }
};

// Create N-ary Tree recursively
Node *createNaryTree()
{
    cout << "Enter node value: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter number of children for node " << data << ": ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter child " << i + 1 << " of " << data << ":" << endl;
        Node *child = createNaryTree();
        root->children.push_back(child);
    }

    return root;
}

// Preorder Traversal for N-ary Tree
void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    for (Node *child : root->children)
    {
        preorder(child);
    }
}

int main()
{
    Node *root = createNaryTree();
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
    return 0;
}
