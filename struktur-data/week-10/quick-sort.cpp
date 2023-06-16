#include <iostream>
using namespace std;

void quicksort(int arr[], int left, int right);

int main() {
    int arr[] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    for (int i=0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, n-1);

    cout << "Sorted array: ";
    for (int i=0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[(left+right)/2];
        int i = left;
        int j = right;

        while (i <= j) {
            while (arr[i] < pivot) {
                i++;
            }
            while (arr[j] > pivot) {
                j--;
            }
            if (i <= j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }

        quicksort(arr, left, j);
        quicksort(arr, i, right);
    }
}
