// ARRAY, POINTER, DAN STRUCT

#include <iostream>
using namespace std;

void tryfree();

int main()
{
	char x = 'a';
	char *y = &x;

	cout << x << endl;
	cout << sizeof(x) << endl;
	cout << sizeof(y) << endl;

	tryfree();
}

void tryfree()
{
	int y = 5000;

	int *pointer = &y;

	cout << *pointer << endl;
	cout << pointer << endl;

	free(pointer);

	cout << *pointer << endl;
	cout << pointer << endl;
}
