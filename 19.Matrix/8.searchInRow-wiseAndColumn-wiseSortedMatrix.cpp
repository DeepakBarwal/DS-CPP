#include <iostream>
using namespace std;

const int R = 4;
const int C = 4;

void search(int mat[R][C], int x)
{
    int i = 0, j = C - 1;
    while (i < R && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << "Found at (" << i << ", " << j << ")";
            return;
        }
        else if (mat[i][j] > x)
            j--;
        else
            i++;
    }
    cout << "Not Found";
}

int main()
{
    int mat[R][C] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 38},
                     {32, 33, 39, 50}};

    search(mat, 29);

    return 0;
}