#include <iostream>

using namespace std;

int faktorial (int n)
{
    if (n == 1)
    {
        return n;
    }
    else 
    {
        return n * faktorial(n-1);
    }
}

int main ()
{
    cout << faktorial(4) << endl;

    return 0;
}