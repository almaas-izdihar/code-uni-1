#include <iostream>
using namespace std;

int partition(int data[], int low, int high)
{
    int pivot = data[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (data[j] <= pivot)
        {
            i++;
            swap(data[i], data[j]);
        }
    }
    swap(data[i + 1], data[high]);
    return i + 1;
}

void quick_sort(int data[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(data, low, high);
        quick_sort(data, low, pi - 1);
        quick_sort(data, pi + 1, high);
    }
}

int main()
{
    int data[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(data) / sizeof(data[0]);
    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";

    quick_sort(data, 0, n - 1);

    cout << "Data setelah diurutkan: ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
}