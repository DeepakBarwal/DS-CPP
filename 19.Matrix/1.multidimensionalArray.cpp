#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 3, n = 2;

    int arr[m][n] = {{10, 20},
                     {30, 40},
                     {50, 60}};

    // int arr[3][2] = {10, 20, 30, 40, 50, 60};

    // int arr[][2] = {{10, 20}, {30, 40}, {50, 60}};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // // Double Pointers
    // int **arr;
    // arr = new int *[m];

    // for (int i = 0; i < m; i++)
    //     arr[i] = new int[n];

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 10;
    //         cout << arr[i][j] << " ";
    //     }
    // }

    // // Array of Pointers
    // int *arr[m];
    // for (int i = 0; i < m; i++)
    //     arr[i] = new int[n];

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 10;
    //         cout << arr[i][j] << " ";
    //     }
    // }

    // // Array of vectors
    // vector<int> arr[m];
    // for (int i = 0; i < m; i++)
    //     for (int j = 0; j < n; j++)
    //         arr[i].push_back(10);

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 10;
    //         cout << arr[i][j] << " ";
    //     }
    // }

    // // Vector of vectors
    // vector<vector<int>> arr;
    // for (int i = 0; i < m; i++)
    // {
    //     vector<int> v;
    //     for (int j = 0; j < n; j++)
    //         v.push_back(10);
    //     arr.push_back(v);
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //         arr[i][j] = 10;
    //         cout << arr[i][j] << " ";
    //     }
    // }

    return 0;
}