#include <iostream>

using namespace std;


int main() 
{
    string name;

    cout << "Greetings, fellow human !" << endl;
    cout << "-------------------------" << endl;
    cout << "What is your name? ";
    cin >> name;
    cout << "Welcome, " + name + "! Nice to meet you again!" << endl;

    return 0;
}
