/*
    Nama    : Almaas Izdihar Sant
    NIM     : 4611422076

    latihan (array)
    Buat program untuk menentukan angka tertinggi kedua
    dari sekumpulan angka di dalam array
*/

#include <iostream>

using namespace std;

int main() 
{
    // data array
    int numbers[] = {5,3,6,8,2,1,9,7,0,4};

    // ambil panjang array
    int n = end(numbers) - begin(numbers);

    // urutkan array dari nilai terbesar ke terkecil
    // bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(numbers[j] < numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }    

    // output nilai terbesar kedua
    cout << numbers[1] << endl;

    return 0;
}