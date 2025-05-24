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
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build the tree using user input
Node *buildTree()
{
    cout << "Enter data: ";
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    Node *root = new Node(data);

    cout << "Enter data for left child of " << data << endl;
    root->left = buildTree();

    cout << "Enter data for right child of " << data << endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL); // Marker for end of first level

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl; // End of current level

            if (!q.empty())
                q.push(NULL); // Marker for next level
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = buildTree(); 
    cout << "\nLevel Order Traversal: \n";
    levelOrderTraversal(root);
    return 0;
}
