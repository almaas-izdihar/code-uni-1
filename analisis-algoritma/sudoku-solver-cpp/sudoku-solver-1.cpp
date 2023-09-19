#include <iostream>
#include <vector>

using namespace std;

const int N = 9;

// Function to print the Sudoku grid
void printGrid(vector<vector<int>>& grid) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j];
        }
    }
    cout << endl;
}

// Function to check if a number can be placed in a specific cell
bool isSafe(vector<vector<int>>& grid, int row, int col, int num) {
    // Check row and column
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return false;
        }
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Recursive Sudoku solver function
bool solveSudoku(vector<vector<int>>& grid, int row, int col) {
    if (row == N - 1 && col == N) {
        return true; // All cells have been filled
    }

    if (col == N) {
        row++;
        col = 0;
    }

    if (grid[row][col] != 0) {
        return solveSudoku(grid, row, col + 1);
    }

    for (int num = 1; num <= N; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid, row, col + 1)) {
                return true;
            }

            grid[row][col] = 0; // If placing num doesn't lead to a solution, backtrack
        }
    }

    return false;
}

int main() {
    // Input Sudoku puzzle as a string
    string input = "000001200100700045000430700090006300050807020006200090003019000970004006002500000";

    // Convert the string into a 2D vector
    vector<vector<int>> grid(N, vector<int>(N));
    int k = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            grid[i][j] = input[k++] - '0';
        }
    }

    // Solve the Sudoku puzzle
    if (solveSudoku(grid, 0, 0)) {
        // Print the solved Sudoku grid
        printGrid(grid);
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
