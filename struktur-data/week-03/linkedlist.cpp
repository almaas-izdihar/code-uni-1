#include <iostream>

using namespace std;

class Node {
public:
    string nama;
    int nim;
    Node* next;

    Node (string nama_mhs, int nim_mhs) {
        nama = nama_mhs;
        nim = nim_mhs;
        next = nullptr;
    }
};


class Linkedlist {
public:
    Node* head;

    Linkedlist () {
        head = nullptr;
    }

    void push (string nama, int nim) {
        Node* newNode = new Node(nama, nim);

        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void shift (string nama, int nim) {
        Node* newNode = new Node(nama, nim);

        if (head == nullptr) {
            head = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void remove (string nama, int nim) {
        Node* currentNode = head;
        Node* prevNode = nullptr;

        while (currentNode != nullptr) {
            if (currentNode->nama == nama && currentNode->nim == nim) {
                // if delete head node
                if (prevNode == nullptr) {
                    head = currentNode->next;
                }
                else {
                    prevNode->next = currentNode->next;
                }
                delete currentNode;
                break;
            }
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
    }

    void print () {
        Node* currentNode = head;

        while (currentNode != NULL) {
            cout << "at " << currentNode << " ->";
            cout << " " << currentNode->nama;
            cout << " " << currentNode->nim;
            cout << endl;

            currentNode = currentNode->next;
        }
    }
};



int main () {
    Linkedlist list;

    list.push("almaas", 4612232);
    list.push("izdihar", 5784373);
    list.push("dody", 75745);
    list.push("sandhika", 7497586);

    list.shift("shift", 74757485);
    list.shift("awal", 7657675);

    list.remove("dody", 75745);

    list.print();

    return 0;
}