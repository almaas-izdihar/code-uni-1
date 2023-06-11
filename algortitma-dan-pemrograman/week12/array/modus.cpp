/*
    Nama    : Almaas Izdihar Sant
    NIM     : 4611422076

    latihan 
    Buat program untuk menentukan angka yang paling banyak 
    muncul dari sekumpulan angka di dalam array
*/

#include <iostream>

using namespace std;

int main ()
{
    // data array
    int numbers[] = {1,2,3,4,4,4,5,5,5,5,5,5,6,6,7};

    // panjang array
    int n = end(numbers) - begin(numbers);

    // logic
    int index = 0;
    int maxCount = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count = 0;

        for (int j = 0; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count += 1;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    // output
    int modus = numbers[index];
    cout << "modus: " << modus << endl;

    return 0;
}