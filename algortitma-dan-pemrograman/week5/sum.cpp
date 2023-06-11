#include <iostream>

using namespace std;

int main() 
{
    int num1,num2,total;

    cout << "sum of two numbers :" << endl;
    cout << "-------------------------" << endl;

    cout << "input 1st number : ";
    cin >> num1;

    cout << "input 2nd number : ";
    cin >> num2;

    total = num1 + num2;
    cout << "The sum of the number is : " << total << endl;

    return 0;
}