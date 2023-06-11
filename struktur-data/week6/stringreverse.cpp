#include <iostream>

using namespace std;

string reverse(string kata) {
    int length = kata.length();
    string result = kata;

    for (int i = 0; i < length; i++)
    {
        result[i] = kata[length-i-1];
    }
    return result;   
}


int main () {
    cout << reverse("hello") << endl;
}