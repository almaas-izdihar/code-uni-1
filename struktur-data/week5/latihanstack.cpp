#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack
{
public:
    int maxStack = 5;
    int stackCount = 0;

    Node *top = nullptr;

    void push(int data)
    {
        // ketika stack penuh
        if (stackCount >= maxStack) {
            cout << "stack penuh" << endl;
            return;
        }

        // isi stack
        Node *newNode = new Node(data);

        if (top == nullptr)
        {
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
        stackCount++;
        cout << "berhasil menambahkan " << newNode->data << endl;
    }

    void pop()
    {
        if (top == nullptr)
        {
            return;
        }
        Node* willDelete = top;
        cout << "berhasil menghapus " << willDelete->data << endl;
        
        top = top->next;
        delete willDelete;
        stackCount--;
    }

    void print()
    {
        Node *current = top;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main()
{
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);

    stack.pop();
    stack.pop();

    // cout << stack.top << endl;

    stack.print();
}