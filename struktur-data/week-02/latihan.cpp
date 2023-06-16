#include <iostream>

using namespace std;

int main()
{
    int x = 500;

    int *ptr = &x;

    cout << &x << endl;
    cout << &ptr << endl;
    cout << ptr << endl;  // alamat var x
    cout << *ptr << endl; // tunjuk ke x

    int **ptr2 = &ptr;

    cout << &ptr2 << endl;
    cout << ptr2 << endl;   // alamat var ptr
    cout << *ptr2 << endl;  // isi var ptr
    cout << **ptr2 << endl; // tunjuk ke ptr
}
