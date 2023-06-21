#include <iostream>

using namespace std;

int factorial (int number) {
    if (number <= 1) {
        return number;
    }
    return number * factorial(number - 1);
}


int factorialTail (int number, int result) {
    if (number <= 0) {
        return result;
    }
    return factorialTail(number-1, number*result);
}

int main () {
    cout << "4! = " << factorial(4) << endl;
    cout << "4! = " << factorialTail(4,1) << endl;
}