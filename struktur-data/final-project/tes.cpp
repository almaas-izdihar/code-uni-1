#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class Tree {
private:
    Node* root;

public:
    Tree() : root(nullptr) {}

    void create() {
        clear();
    }

    void clear() {
        clearRecursive(root);
        root = nullptr;
    }

    bool empty() {
        return root == nullptr;
    }

    void insert(int data) {
        root = insertRecursive(root, data);
    }

    void clearRecursive(Node* node) {
        if (node == nullptr)
            return;

        clearRecursive(node->left);
        clearRecursive(node->right);

        delete node;
    }

    Node* insertRecursive(Node* node, int data) {
        if (node == nullptr)
            return new Node{data, nullptr, nullptr};
        
        if (data < node->data)
            node->left = insertRecursive(node->left, data);
        else
            node->right = insertRecursive(node->right, data);
        
        return node;
    }

    Node* find(int data) {
        return findRecursive(root, data);
    }

    Node* findRecursive(Node* node, int data) {
        if (node == nullptr || node->data == data)
            return node;
        
        return findRecursive((data < node->data) ? node->left : node->right, data);
    }

    void update(int data, int new_data) {
        Node* node = find(data);
        if (node != nullptr)
            node->data = new_data;
    }

    int retrieve(int data) {
        Node* node = find(data);
        return (node != nullptr) ? node->data : -1;
    }

    void deleteSub(int data) {
        root = deleteSubRecursive(root, data);
    }

    Node* deleteSubRecursive(Node* node, int data) {
        if (node == nullptr)
            return nullptr;
        
        if (data < node->data)
            node->left = deleteSubRecursive(node->left, data);
        else if (data > node->data)
            node->right = deleteSubRecursive(node->right, data);
        else
            node->left = node->right = nullptr;
        
        return node;
    }

    int size() {
        return sizeRecursive(root);
    }

    int sizeRecursive(Node* node) {
        return (node == nullptr) ? 0 : 1 + sizeRecursive(node->left) + sizeRecursive(node->right);
    }

    int height() {
        return heightRecursive(root);
    }

    int heightRecursive(Node* node) {
        return (node == nullptr) ? -1 : 1 + max(heightRecursive(node->left), heightRecursive(node->right));
    }

    float averageLength() {
        int totalLength = totalLengthRecursive(root, 0);
        int totalNodes = size();
        return (totalNodes > 0) ? static_cast<float>(totalLength) / totalNodes : 0;
    }

    int totalLengthRecursive(Node* node, int level) {
        return (node == nullptr) ? 0 : level + totalLengthRecursive(node->left, level + 1)
                                       + totalLengthRecursive(node->right, level + 1);
    }

    void traversePreorder() {
        traversePreorderRecursive(root);
    }

    void traversePreorderRecursive(Node* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            traversePreorderRecursive(node->left);
            traversePreorderRecursive(node->right);
        }
    }

    void traverseInorder() {
        traverseInorderRecursive(root);
    }

    void traverseInorderRecursive(Node* node) {
        if (node != nullptr) {
            traverseInorderRecursive(node->left);
            cout << node->data << " ";
            traverseInorderRecursive(node->right);
        }
    }
};

int main() {
    Tree tree;
    tree.create();

    for (int data : {4, 2, 6, 1, 3, 5, 7})
        tree.insert(data);

    Node* foundNode = tree.find(3);
    if (foundNode != nullptr) {
        cout << "Node ditemukan: " << foundNode->data << endl;
        tree.update(3, 8);
        cout << "Setelah diubah: " << foundNode->data << endl;
    }

    tree.deleteSub(6);

    cout << "Ukuran tree: " << tree.size() << endl;
    cout << "Tinggi tree: " << tree.height() << endl;
    cout << "Rata-rata panjang path: " << tree.averageLength() << endl;

    cout << "Traversal Inorder: ";
    tree.traverseInorder();
    cout << endl;

    return 0;
}

