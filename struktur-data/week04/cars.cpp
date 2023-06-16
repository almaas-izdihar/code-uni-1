#include <iostream>

using namespace std;

class Car
{
public:
    int number;
    string brand;
    string owner;
    Car *next;
    Car *prev;

    Car(int number, string brand, string owner)
    {
        this->number = number;
        this->brand = brand;
        this->owner = owner;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class CarQueue
{
public:
    Car *head = nullptr;
    Car *tail = nullptr;

    void in(int number, string brand, string owner)
    {
        Car *newCar = new Car(number, brand, owner);

        if (head == nullptr && tail == nullptr)
        {
            head = newCar;
            tail = newCar;
        }
        else
        {
            newCar->next = head;
            head->prev = newCar;
            head = newCar;
        }
    }

    void out(int number)
    {
        Car *current = head;
        while (current != nullptr)
        {
            if (current->number == number)
            {
                if (head == tail)
                {
                    head = nullptr;
                    tail = nullptr;
                    delete current;
                    return;
                }
                if (current == head)
                {
                    head = current->next;
                    head->prev = nullptr;
                    delete current;
                    return;
                }
                if (current == tail)
                {
                    tail = current->prev;
                    tail->next = nullptr;
                    delete current;
                    return;
                }
                Car *prevCar = current->prev;
                Car *nextCar = current->next;
                prevCar->next = nextCar;
                nextCar->prev = prevCar;
                delete current;
                return;
            }
            current = current->next;
        }
    }

    void print()
    {
        Car *current = head;

        while (current != nullptr)
        {
            cout << current->number << " - ";
            cout << current->brand << " - ";
            cout << current->owner << endl;
            current = current->next;
        }
    }
};

int main()
{
    CarQueue que;

    que.in(1234, "rubicon", "allice");
    que.in(5678, "jeep", "bob");
    que.in(7569, "mrc", "charlie");
    que.in(6858, "volvo", "dre");

    que.out(6858);

    que.print();

    return 0;
}