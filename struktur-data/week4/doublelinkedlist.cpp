#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;

    Node (int node_value) {
        value = node_value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoubleLinkedList {
public: 
    Node* head;
    Node* tail;

    DoubleLinkedList () {
        head = nullptr;
        tail = nullptr;
    }

    void push (int value) {
        Node* newNode = new Node(value);
        
        if (head == nullptr && tail == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void shift (int value) {
        Node* newNode = new Node (value);

        if (head == nullptr && tail == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }

    }

    void printFwd () {
        Node* currentNode = head;

        while (currentNode != nullptr) {
            cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }

        cout << endl;
    }

    void printBwd () {
        Node* currentNode = tail;

        while (currentNode != nullptr) {
            cout << currentNode->value << " ";
            currentNode = currentNode->prev;
        }

        cout << endl;
    }
};

int main () {
    DoubleLinkedList list;

    list.push(50);
    list.push(33);
    list.push(53);

    list.shift(200);
    list.shift(399);

    list.printFwd();
    list.printBwd();

    return 0;
}