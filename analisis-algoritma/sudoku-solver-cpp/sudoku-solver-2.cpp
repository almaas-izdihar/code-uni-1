#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

#define N 9

unsigned long iterationSolver = 0;

void print(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
    for (int x = 0; x <= 8; x++)
    {
        if (grid[row][x] == num)
        {
            return false;
        }
    }

    for (int x = 0; x <= 8; x++)
    {
        if (grid[x][col] == num)
        {
            return false;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i + startRow][j + startCol] == num)
            {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int grid[N][N], int row, int col)
{
    iterationSolver++;

    if (row == N - 1 && col == N)
    {
        return true;
    }

    if (col == N)
    {
        row++;
        col = 0;
    }

    if (grid[row][col] > 0)
    {
        return solveSudoku(grid, row, col + 1);
    }

    for (int num = 1; num <= N; num++)
    {
        if (isSafe(grid, row, col, num))
        {
            grid[row][col] = num;

            if (solveSudoku(grid, row, col + 1))
            {
                return true;
            }
        }
        grid[row][col] = 0;
    }
    return false;
}

// Driver Code
int main()
{

    auto start = high_resolution_clock::now();

    // INPUT 1
    // int grid[N][N] = {
    //     {5, 3, 0, 0, 7, 0, 0, 0, 0},
    //     {6, 0, 0, 1, 9, 5, 0, 0, 0},
    //     {0, 9, 8, 0, 0, 0, 0, 6, 0},
    //     {8, 0, 0, 0, 6, 0, 0, 0, 3},
    //     {4, 0, 0, 8, 0, 3, 0, 0, 1},
    //     {7, 0, 0, 0, 2, 0, 0, 0, 6},
    //     {0, 6, 0, 0, 0, 0, 2, 8, 0},
    //     {0, 0, 0, 4, 1, 9, 0, 0, 5},
    //     {0, 0, 0, 0, 8, 0, 0, 7, 9},
    // };

    // // INPUT 2
    // int grid[N][N] = {
    //     {9, 0, 0, 1, 0, 4, 0, 0, 2},
    //     {0, 8, 0, 0, 6, 0, 0, 7, 0},
    //     {0, 0, 0, 0, 0, 0, 0, 0, 0},
    //     {4, 0, 0, 0, 0, 0, 0, 0, 1},
    //     {0, 7, 0, 0, 0, 0, 0, 3, 0},
    //     {3, 0, 0, 0, 0, 0, 0, 0, 7},
    //     {0, 0, 0, 0, 2, 0, 0, 0, 0},
    //     {0, 3, 0, 0, 7, 0, 0, 8, 0},
    //     {1, 0, 0, 0, 0, 9, 0, 0, 0},
    // };

    // // INPUT 3
    // int grid[N][N] = {
    //     {0, 0, 0, 0, 0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0, 3, 0, 8, 5},
    //     {0, 0, 1, 0, 2, 0, 0, 0, 0},
    //     {0, 0, 0, 5, 0, 7, 0, 0, 0},
    //     {0, 0, 4, 0, 0, 0, 1, 0, 0},
    //     {0, 9, 0, 0, 0, 0, 0, 0, 0},
    //     {5, 0, 0, 0, 0, 0, 0, 7, 3},
    //     {0, 0, 2, 0, 1, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 4, 0, 0, 0, 9},
    // };

    // EXAMPLE INPUT
    int grid[N][N] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    if (solveSudoku(grid, 0, 0))
    {
        print(grid);
    }
    else
    {
        cout << "no solution exists " << endl;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Jumlah Iterasi: " << iterationSolver << endl;
    cout << "Waktu Eksekusi: " << duration.count() << " milidetik" << endl;

    return 0;
}
