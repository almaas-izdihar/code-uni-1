#include <iostream>

using namespace std;

int main ()
{
    int arr[] = {1,3,5,7,4,4,7,8,9,9};
    int arrLength = end(arr)-begin(arr);

    for (int i = 0; i < arrLength; i++)
    {
        for (int j = i; j < arrLength; j++)
        {
            if (i !=j && arr[i] == arr[j])
            {
                cout << arr[i] << endl;
                return 0;
            }
        }
    }

    return 0;
}