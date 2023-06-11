#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (root == nullptr) {
            root = newNode;
            return;
        }
        Node* current = root;
        while (true) {
            if (val < current->value) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    break;
                }
                current = current->left;
            }
            else {
                if (current->right == nullptr) {
                    current->right = newNode;
                    break;
                }
                current = current->right;
            }
        }
    }

    bool search(int val) {
        Node* current = root;
        while (current != nullptr) {
            if (val == current->value) {
                return true;
            }
            else if (val < current->value) {
                current = current->left;
            }
            else {
                current = current->right;
            }
        }
        return false;
    }

    void printInOrder(Node* node) {
        if (node == nullptr) {
            return;
        }
        printInOrder(node->left);
        cout << node->value << " ";
        printInOrder(node->right);
    }

    void print() {
        printInOrder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(9);

    tree.print(); // output: 1 3 5 7 9

    cout << tree.search(7) << endl; // output: 1 (true)
    cout << tree.search(4) << endl; // output: 0 (false)

    return 0;
}
