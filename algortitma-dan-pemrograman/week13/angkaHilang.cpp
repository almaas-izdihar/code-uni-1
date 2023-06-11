#include <iostream>

using namespace std;

int main ()
{
    int arr[] = {2,1,3,4,5,7,8,9};
    int arrLength = end(arr)-begin(arr);

    // sort
    for (int i = 0; i < arrLength-1; i++)
    {
        for (int j = 0; j < arrLength-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // check
    for (int i = 0; i < arrLength+1; i++)
    {
        if(arr[i] != i+1)
        {
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}