#include <iostream>

using namespace std;

int main () {
    int menu;
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "Bakso" << endl;
        break;
        case 2:
            cout << "Mie Ayam" << endl;
        break;
        case 3:
            cout << "Nasi Goreng" << endl;
        break;
        default:
            cout << "es teh" << endl;

    }
}