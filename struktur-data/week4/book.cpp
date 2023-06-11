#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    string publisher;
    Book *next;
    Book *prev;
};

Book *head = NULL;
Book *tail = NULL;

void addBook(string title, string author, string publisher)
{
    Book *newBook = new Book();
    newBook->title = title;
    newBook->author = author;
    newBook->publisher = publisher;

    if (head == NULL)
    {
        head = newBook;
        tail = newBook;
    }
    else
    {
        tail->next = newBook;
        newBook->prev = tail;
        tail = newBook;
    }
}

void deleteBook(string title)
{
    Book *currentBook = head;
    while (currentBook != NULL)
    {
        if (currentBook->title == title)
        {
            // hapus depan
            if (currentBook == head)
            {
                head = currentBook->next;
                head->prev = NULL;
                delete currentBook;
                return;
            }
            // hapus belakang
            if (currentBook == tail)
            {
                tail = currentBook->prev;
                tail->next = NULL;
                delete currentBook;
                return;
            }
            // menghapus tengah
            Book *prevBook = currentBook->prev;
            Book *nextBook = currentBook->next;
            prevBook->next = nextBook;
            nextBook->prev = prevBook;
            delete currentBook;
            return;
        }
        currentBook = currentBook->next;
    }
}

void print()
{
    Book *currentBook = head;
    while (currentBook != NULL)
    {
        cout << currentBook->title << endl;
        currentBook = currentBook->next;
    }
}

int main()
{

    // Book *book1 = new Book();
    // book1 -> author = "Andi";
    // book1 -> title = "Ngoko";
    // book1 -> publisher = "Ngodingo";

    // Book *book2 = new Book();
    // book2 -> author = "Fajar";
    // book2 -> title = "Ngorengndi";
    // book2 -> publisher = "David Kost";

    // book1->next = book2;
    // book2->prev = book1;
    // book2->next = NULL;
    // book1->prev = NULL;

    addBook("Ngoko", "Rafi", "Ngodingo");
    addBook("Ngorengndi", "Andi", "Ngo");
    addBook("Ngober", "Pajar", "Ngoding");
    addBook("Ngoberkuy", "izza", "Ngodingoz");

    print();
    deleteBook("Ngoko");
    print();

    // cout << head->prev << endl;
    return 0;
}