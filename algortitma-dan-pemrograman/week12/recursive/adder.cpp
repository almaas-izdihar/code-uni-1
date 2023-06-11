/*
    Nama    : Almaas Izdihar Sant
    NIM     : 4611422076

    latihan (rekursif)
    Menjumlahkan angka dari 1 sampai n.
*/

#include <iostream>

using namespace std;

int add (int n)
{
    if (n == 1)
    {
        return n;
    }
    return n + add(n-1);
}

int main ()
{
    int n;
    cin >> n ;
    cout << add(n) << endl;

    return 0;
}