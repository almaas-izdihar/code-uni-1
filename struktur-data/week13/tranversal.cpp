#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree
{
public:
    Node *root;

    BinaryTree()
    {
        root = NULL;
    }

    void insertRecursive(Node *&node, int value)
    {
        if (node == NULL)
        {
            node = new Node(value);
            return;
        }

        if (value < node->data)
        {
            insertRecursive(node->left, value);
        }
        else
        {
            insertRecursive(node->right, value);
        }
    }

    void insert(int value)
    {
        insertRecursive(root, value);
    }

    void inOrderTraversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }

        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }

    void preOrderTraversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }

        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void postOrderTraversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }

        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << " ";
    }
};

int main()
{
    BinaryTree bt;

    int data[] = {7, 5, 12, 3, 6, 1, 9};

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        bt.insert(data[i]);
    }

    cout << "In-order traversal: ";
    bt.inOrderTraversal(bt.root);
    cout << endl;

    cout << "Pre-order traversal: ";
    bt.preOrderTraversal(bt.root);
    cout << endl;

    cout << "Post-order traversal: ";
    bt.postOrderTraversal(bt.root);
    cout << endl;

    return 0;
}
