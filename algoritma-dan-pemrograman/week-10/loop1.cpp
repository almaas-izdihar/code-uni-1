#include <iostream>

using namespace std;

void loop(int);

int main () {
    loop(9);

    return 0;
}

void loop(int n) 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i+1;
        }
        cout << endl;
    }
}