#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool searchInBST(Node *root, int x)
{
    if (root == NULL)
        return false;

    if (root->data == x)
        return true;
    else if (x < root->data)
        return searchInBST(root->left, x);
    else
        return searchInBST(root->right, x);
}
