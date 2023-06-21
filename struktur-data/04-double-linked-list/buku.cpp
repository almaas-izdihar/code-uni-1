#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    string publisher;
    Book *next = nullptr;
    Book *prev = nullptr;

    Book(string title, string author, string publisher)
    {
        this->title = title;
        this->author = author;
        this->publisher = publisher;
    }
};

class DoubleLinkedList
{
public:
    Book *head = nullptr;
    Book *tail = nullptr;

    void addBook(string title, string author, string publisher)
    {
        Book *newBook = new Book(title, author, publisher);

        if (head == nullptr && tail == nullptr)
        {
            head = newBook;
            tail = newBook;
        }
        else 
        {
            newBook->prev = tail;
            tail->next = newBook;
            tail = newBook;
        }
    }

    void deleteBook(string title)
    {
        Book *current = head;

        while (current != nullptr)
        {
            if (current->title == title)
            {
                // hapus ketika linked list hanya satu elemen
                if (head == tail) 
                {
                    head = nullptr;
                    tail = nullptr;
                    delete current;
                    return;
                }
                // hapus depan
                if (current == head)
                {
                    head = current->next;
                    head->prev = nullptr;
                    delete current;
                    return;
                }
                // hapus belakang
                if (current == tail) 
                {
                    tail = tail->prev;
                    tail->next = nullptr;
                    delete current;
                    return;
                }
                // hapus tengah
                Book* prevBook = current->prev;
                Book* nextBook = current->next;
                prevBook->next = nextBook;
                nextBook->prev = prevBook;
                delete current;
                return;
            }
            current = current->next;
        }
    }

    void printBook()
    {
        Book *current = head;
        while (current != nullptr)
        {
            cout << current->title << endl;
            current = current->next;
        }
    }
};

int main()
{
    DoubleLinkedList list;

    list.addBook("abc", "fhdkjh", "unnes");
    list.addBook("cde", "fhdkjh", "unnes");
    list.addBook("def", "fhdkjh", "unnes");

    list.deleteBook("cde");

    // cout << list.head << endl;

    list.printBook();

    return 0;
}