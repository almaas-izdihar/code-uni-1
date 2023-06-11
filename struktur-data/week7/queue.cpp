#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

class Queue
{
private:
    int data[MAX_SIZE];
    int front, rear;

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return (rear + 1) % MAX_SIZE == front;
    }

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full\n";
            return;
        }
        else if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }
        data[rear] = value;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front -> ";
        int i = front;
        while (i != rear)
        {
            cout << data[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << data[rear] << " <- Rear\n";
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.print(); // expected output: Front -> 10 20 30 40 50 <- Rear

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.print(); // expected output: Front -> 30 40 50 <- Rear

    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    q.print(); // expected output: Front -> 30 40 50 60 70 <- Rear

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.enqueue(90);
    q.enqueue(100);
    q.enqueue(110);
    q.enqueue(120);

    q.print();

    return 0;
}
