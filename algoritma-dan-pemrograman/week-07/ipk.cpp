#include <iostream>

using namespace std;

int main () 
{
    float ipk;
    cout << "Masukkan nilai IPK : ";
    cin >> ipk;

    if (ipk >= 3.5) {
        cout << "Cumlaude" << endl;
    } else if (ipk >= 3.0) {
        cout << "Baik" << endl;
    } else {
        cout << "ww" << endl;
    }

}