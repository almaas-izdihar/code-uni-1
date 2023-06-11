#include <iostream>

using namespace std;

void loop (int);

int main ()
{
    loop(10);
}

void loop (int n) 
{
    int a = 1;
    int b = 4;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout << a;
            a += 2;
        }
        else
        {
            cout << b;
            b += 4;
        }

        if (i < n)
        {
            cout << ",";
        }
    }
    cout << endl;
}
