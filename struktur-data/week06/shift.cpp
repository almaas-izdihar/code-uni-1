#include <iostream>
#include <bitset>

using namespace std;

class BinaryArray
{
private:
    int number;
    string bit;

public:
    void inputNumber(int number)
    {
        this->number = number;
        this->bit = bitset<8>(number).to_string();
    }

    void shiftRight(int count)
    {
        for (int i = 0; i < count; i++)
        {
            char last = this->bit[this->bit.length() - 1];
            for (int i = (this->bit.length() - 1), n = 0; i > n; i--)
            {
                this->bit[i] = this->bit[i - 1];
            }
            this->bit[0] = last;
        }
        this->number = stoi(this->bit, 0, 2);
    }

    void printBit()
    {
        cout << this->bit << endl;
    }

    void printNumber()
    {
        cout << this->number << endl;
    }
};

int main()
{
    BinaryArray x;

    x.inputNumber(12);

    x.printBit();
    x.printNumber();

    x.shiftRight(1);

    x.printBit();
    x.printNumber();
}