#include <iostream>

using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

// LinkedList class definition
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Insert a node at the end of the list
    void push(int data) {
        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    // Delete a node by value
    void remove(int value) {
        Node* currentNode = head;
        Node* prevNode = nullptr;

        while (currentNode != nullptr) {
            if (currentNode->data == value) {
                // If the node to be deleted is the head node
                if (currentNode == head) {
                    head = currentNode->next;
                } else {
                    prevNode->next = currentNode->next;
                }
                delete currentNode;
                return;
            }
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
    }

    // Print the list
    void print() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);

    list.remove(1);
    list.remove(7);

    list.print();

    return 0;
}

// void hekjfh () {
//   int x = 5; // 4byte
//   int *y = &x; // 8byte
// }

// struct Mhs {
//   int nama;
//   Mhs* next;
// };

// int x = 50;
// int *p = &x;

// string x = "hello";
// string y = "hello";

// if (x == y) {
//   cout << "sama";
// }
// else {
//   cout << "beda";
// }