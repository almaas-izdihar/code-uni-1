#include <iostream>

using namespace std;

void loop(int);

int main ()
{
    loop(8);

    return 0;
}

void loop (int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i;

        cout << i;
        if (i % 2 == 1)
        {
            cout << "+";
        }
        else 
        {
            cout << "=" << result << endl;
            result = 0;
        }
    }
}

