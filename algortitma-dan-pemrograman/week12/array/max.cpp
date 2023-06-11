/*
    Nama    : Almaas Izdihar Sant
    NIM     : 4611422076

    latihan (array)
    Buat program untuk menentukan angka tertinggi 
    dari sekumpulan angka yang ada di dalam array
*/

#include <iostream>

using namespace std;

int main ()
{
    // data array
    int numbers[] = {5,3,6,8,2,1,9,7,0,4};

    // ambil panjang array
    int n = end(numbers)-begin(numbers);

    int max = numbers[0];

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    cout << max << endl;

    return 0;
}