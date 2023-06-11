#include <iostream>

using namespace std;

int main () {
    double vol, p1, p2, water;
    float time;

    cin >> vol;
    cin >> p1;
    cin >> p2;
    cin >> time;

    water = (p1 + p2) * time;

    if (water <= vol) {
        cout << "the pool is " << water/vol*100 << "%" << " full";
        cout << "pipe 1:" << (p1*time)/vol*100 << "%";
        cout << "pipe 2:" << (p2*time)/vol*100 << "%";
        cout << endl;
    } else {
        cout << "for " << time << " hours ";
        cout << "the pool overflows with " << water - vol << " liter";
        cout << endl;
    }

}

// 1000

// 100
// 120
// 2

//68%