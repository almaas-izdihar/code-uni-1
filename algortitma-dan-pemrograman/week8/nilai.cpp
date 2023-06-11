#include <iostream>

using namespace std;

int main () {
    
    int n;
    float nilai;

    float totalNilai = 0;
    int baikSekali = 0; 
    int baik = 0; 
    int kurang = 0;

    //masukkan jumlah siswa
    cout << "masukkan jumlah siswa: ";
    cin >> n;

    //loop input nilai siswa & kategorikan
    for (int i = 1 ; i <= n; i++ ) {

        //cek agar user menginput nilai 0-10
        do {
            cout << "masukkan nilai(range 0-10) siswa ke-" << i << ": ";
            cin >> nilai;
        } while (nilai < 0 || nilai > 10);

        //ketegorikan golongan nilai
        if (nilai >= 8) {
            baikSekali++;
        } else if (nilai >= 6.5) {
            baik++;
        } else {
            kurang++;
        }
        
        //jumlah total nilai (untuk rata-rata)
        totalNilai += nilai;
    }

    // buat presentase kategori
    float presentaseBaikSekali = (float)baikSekali / n * 100;
    float presentaseBaik = (float)baik / n * 100;
    float presentaseKurang = (float)kurang / n * 100;
    // rata-rata nilai
    float rataRata = totalNilai / n;

    //output ke user
    cout << "Baik Sekali: " << presentaseBaikSekali << "%" << endl;
    cout << "Baik: " << presentaseBaik << "%" << endl;
    cout << "Kurang: " << presentaseKurang << "%" << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    return 0;
}
