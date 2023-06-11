#include <iostream>

using namespace std;

int main ()
{
    int n = 5;
    int arr[n];
    int x;

    for(int i = 0; i < n; i++)
    {
        cout << "angka ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "cek angka: ";
    cin >> x;

    for(int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "ada\n";
            return 0;
        }
    }
    cout << "tidak ada\n";

    return 0;
}