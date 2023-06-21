#include <iostream>

using namespace std;


// class Node {
// public: 
//     string nama;
//     int nim;
//     Node* next;

//     Node (string x, int y) {
//         nama = x;
//         nim = y;
//         next = NULL;
//     }
// };

struct Node {
    string nama;
    long nim;
    Node* next;
};


int main () {
    Node mhs;

    mhs.nama = "almaas";
    mhs.nim = 4611422076;
    mhs.next = NULL;

    cout << mhs.nama << endl;

    // Node ex = new Node("almaas", 123);

    // cout << ex->nama << endl;
    // cout << ex->nim << endl;
    // cout << ex->next << endl;
}