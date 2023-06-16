/*
    Nama    : Almaas Izdihar Sant
    NIM     : 4611422076

    Tugas Mandiri Materi Record (Struct) (Tugas Individu)
*/


#include <iostream>
#include <unistd.h>

using namespace std;

struct transaksi {
  string desc;
  string jenis;
  int nominal;
};

// GLOBAL VAR
transaksi dataTransaksi[1000];
int n = 0;

// DECLARATION
void input (string);
void jumlah (string);
void list (string);
void totalTransaksi ();


// APP
int main ()
{
  int menu;

  while (true)
  {
    if (n > 1000) {
      cout << "> data sudah penuh" << endl;
      break;
    }

    cout 
    << "                        " << endl
    << "======= APP MENU =======" << endl
    << "1. input pemasukan      " << endl
    << "2. input pengeluaran    " << endl
    << "3. jumlah pemasukan     " << endl
    << "4. jumlah pengeluaran   " << endl
    << "5. total transaksi      " << endl
    << "6. list pemasukan       " << endl
    << "7. list pengeluaran     " << endl
    << "------------------------" << endl
    << "0. keluar aplikasi      " << endl
    << "========================" << endl;

    cout << "> ";
    cin >> menu;

    switch(menu)
    {
      case 1:
        input("pemasukan");
        break;
      case 2:
        input("pengeluaran");
        break;
      case 3:
        jumlah("pemasukan");
        break;
      case 4:
        jumlah("pengeluaran");
        break;
      case 5:
        totalTransaksi();
        break;
      case 6:
        list("pemasukan");
        break;
      case 7:
        list("pengeluaran");
        break;
      case 0:
        cout << "> exit" << endl;
        return 0;
      default:
        cout << "> invalid menu!" << endl;
    }

    sleep(1);
  }

  return 0;
}


void input (string jenis)
{
  dataTransaksi[n].jenis = jenis;

  cout << "deskripsi : ";
  cin >> dataTransaksi[n].desc;

  cout << "nominal   : ";
  cin >> dataTransaksi[n].nominal;

  n++;

  cout << "> success!" << endl;
}


void jumlah (string jenis)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    if (dataTransaksi[i].jenis == jenis)
    {
      total += dataTransaksi[i].nominal;
    } 
  }
  cout << "jumlah " << jenis << ": " << total << endl;
}


void list (string jenis)
{
  for (int i = 0; i < n; i++)
  {
    if (dataTransaksi[i].jenis == jenis)
    {
      cout 
      << dataTransaksi[i].nominal 
      << " - " 
      << dataTransaksi[i].desc 
      << endl;
    }
  }
}


void totalTransaksi()
{
  int totalPemasukan = 0;
  int totalPengeluaran = 0;

  for (int i = 0; i < n; i++)
  {
    if (dataTransaksi[i].jenis == "pemasukan")
    {
      totalPemasukan += dataTransaksi[i].nominal;
    }
    else
    {
      totalPengeluaran += dataTransaksi[i].nominal;
    }
  }

  cout << "total transaksi: " << totalPemasukan - totalPengeluaran << endl;
}