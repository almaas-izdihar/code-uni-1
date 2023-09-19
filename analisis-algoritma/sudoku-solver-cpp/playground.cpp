#include <iostream>

using namespace std;

int main () {
    int grid[9][9] = {
        {0,0,0,0,0,1,2,0,0},
        {1,0,0,7,0,0,0,4,5},
        {0,0,0,4,3,0,7,0,0},
        {0,9,0,0,0,6,3,0,0},
        {0,5,0,8,0,7,0,2,0},
        {0,0,6,2,0,0,0,9,0},
        {0,0,3,0,1,9,0,0,0},
        {9,7,0,0,0,4,0,0,6},
        {0,0,2,5,0,0,0,0,0}
    };

    
    // Check row, column, and 3x3 subgrid
    for (int num = 0; num < 9; num++) {
        int row = 0;
        int col = 0;
        for (int i = 0; i < 9; i++) {
            cout << grid[row - row % 3 + i / 3][col - col % 3 + i % 3];
            row++;
        }
        cout << endl;
        row = 0;
        col++;
    }
}