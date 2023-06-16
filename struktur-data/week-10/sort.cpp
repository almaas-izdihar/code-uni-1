#include <iostream>
using namespace std;

void insertion_sort();
void selection_sort();
void bubble_sort();
void print(int *arr, int max);

int main()
{
    cout << "insertion sort" << endl;
    insertion_sort();
    cout << endl;

    cout << "selection sort" << endl;
    selection_sort();
    cout << endl;

    cout << "bubble sort" << endl;
    bubble_sort();
    cout << endl;
}

void insertion_sort()
{
    int max = 10;
    int arr[max] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};

    for (int i = 0; i < max; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                break;
            }
            swap(arr[j], arr[j - 1]);
        }
    }

    print(arr, max);
}

void selection_sort()
{
    int max = 10;
    int arr[max] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};

    for (int i = 0; i < max; i++)
    {
        int minIndex = i;
        for (int currentIndex = i; currentIndex < max; currentIndex++)
        {
            if (arr[minIndex] > arr[currentIndex])
            {
                minIndex = currentIndex;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    print(arr, max);
}

void bubble_sort()
{
    int max = 10;
    int arr[max] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    print(arr, max);
}

void print(int *arr, int max)
{
    for (int x = 0; x < max; x++)
    {
        cout << arr[x] << " ";
    }
    cout << endl;
}