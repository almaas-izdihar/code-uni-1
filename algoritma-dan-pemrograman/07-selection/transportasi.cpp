#include <iostream>
using namespace std;

int main () {
    int jarak = 0;
    float biaya;
    string waktu, kendaraan;

    do
    {
        cout << "masukkan jarak (dalam km) : ";
        cin >> jarak;
    } while (jarak < 0);
    
    do
    {
        cout << "masukkan waktu (siang / malam) : " ;
        cin >> waktu;
    } while (waktu != "siang" && waktu != "malam");
    
    

    if (jarak >= 100) {
        //pake kereta
        biaya = 0.06 * jarak;
        cout << "kereta" << endl;
    } else if (jarak >= 20) {
        //pake bis
        biaya = 0.09 * jarak;
        cout << "bis" << endl;
    } else {
        //pake taksi
        if (waktu == "siang") {
            biaya = 0.79 * jarak;
            cout << "taksi siang" << endl;
        } else {
            biaya = 0.9 * biaya;
            cout << "taksi malam" << endl;
        }
    }

    cout << biaya << endl;
}