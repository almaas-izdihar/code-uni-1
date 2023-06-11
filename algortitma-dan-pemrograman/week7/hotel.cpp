#include <iostream>

using namespace std;

int main () {
    int hari;
    string bulan;

    float hargaStudio, hargaApartemen;

    // user input
    cout << "masukkan bulan: ";
    cin >> bulan;
    cout << "masukkan jumlah hari: ";
    cin >> hari;

    // cek bulan
    if (bulan == "mei" || bulan == "oktober") {
        hargaStudio = 50 * hari;
        hargaApartemen = 65 * hari;         
    } else if (bulan == "juni" || bulan == "september") {
        hargaStudio = 75.20 * hari;
        hargaApartemen = 68.70 * hari;
    } else if (bulan == "juli" || bulan == "agustus") {
        hargaStudio = 76 * hari;
        hargaApartemen = 77 * hari;
    }
    

    //cek jumlah hari
    if (hari > 14) {
        hargaApartemen = hargaApartemen * 90/100;
        if (bulan == "mei" || bulan == "oktober") {
            hargaStudio = hargaStudio * 70/100;
        }
        if (bulan == "juni" || bulan == "september") {
            hargaStudio = hargaStudio * 80/100;
        }
    } else if (hari > 7) {
        if (bulan == "mei" || bulan == "oktober") {
            hargaStudio = hargaStudio * 95/100;
        }
    }

    cout << "harga tipe apartemen: " << hargaApartemen << endl;
    cout << "harga tipe studio: " << hargaStudio << endl;
}


