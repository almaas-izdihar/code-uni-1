#include <iostream>

using namespace std;

void segitiga (int, int);
void persegi (int);

int main () 
{
    segitiga(17,9);
    segitiga(21,11);
    segitiga(7,3);

    return 0;
}

void segitiga (int p, int l)
{
    float luas = p * l / 2.0;
    cout << "luas segitiga dengan P=" << p << " L=" << l << " adalah " << luas << endl;
}

void persegi (int a) 
{
    cout << a << endl;
}