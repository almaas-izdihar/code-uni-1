#include <iostream>

using namespace std;

bool cekBulan (string,string,string);

int main () {
    int hari;
    string bulan;
    float hargaStudio, hargaApartemen;

    // user input
    cout << "masukkan bulan: ";
    cin >> bulan;
    cout << "masukkan jumlah hari: ";
    cin >> hari;

    // harga asli
    if (cekBulan(bulan,
        "mei",
        "oktober"
        )) {
        hargaStudio = 50 * hari;
        hargaApartemen = 65 * hari;         
    } 
    if (cekBulan(bulan,
        "juni",
        "september"
        )) {
        hargaStudio = 75.20 * hari;
        hargaApartemen = 68.70 * hari;
    }
    if (cekBulan(bulan,
        "juli",
        "agustus"
        )) {
        hargaStudio = 76 * hari;
        hargaApartemen = 77 * hari;
    }   

    // diskon
    if (hari > 14) {
        hargaApartemen *= 90/100;
        if (cekBulan(bulan,
            "mei",
            "oktober"
        )) hargaStudio *= 70/100;
        if (cekBulan(bulan,
            "juni",
            "september"
        )) hargaStudio *= 80/100;
    } else if (hari > 7) {
        if (cekBulan(bulan,
            "mei",
            "oktober"
        )) hargaStudio *= 95/100;
    }

    cout << "harga tipe studio: " << hargaStudio << endl;
    cout << "harga tipe apartemen: " << hargaApartemen << endl;
}

bool cekBulan (
    string base, 
    string value1, 
    string value2
    ) {
    return base == value1 || base == value2;
}

