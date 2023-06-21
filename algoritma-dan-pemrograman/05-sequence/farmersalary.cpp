#include <iostream>

using namespace std;

int main() 
{
    double S, B, salary;
    int nS, nB;

    cout << "harga sayur per kg (koin): ";
    cin >> S;

    cout << "harga buah per kg (koin) : ";
    cin >> B;

    cout << "sayur yang dijual (dalam kg) : ";
    cin >> nS;

    cout << "buah yang dijual (dalam kg) : ";
    cin >> nB;

    salary = ( S*nS + B*nB ) / 1.94;

    cout << "pendapatan (IDR) :" << salary << endl;

    return 0;
}