#include <iostream>
#include <vector>
using namespace std;

// C Style

// // Using Double Pointer
// void print(int **arr, int m, int n)
// {
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             cout << arr[i][j] << " ";
// }

// // Using Array of Pointers
// void print(int *arr, int m, int n)
// {
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             cout << arr[i][j] << " ";
// }

// // Using array of Vectors
// void print(vector<int> arr[], int m)
// {
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < arr[i].size(); j++)
//             cout << arr[i][j] << " ";
// }

// Using Vector of Vectors
void print(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
}

int main()
{
    // // Using Double Pointer
    // int **arr;
    // int m = 3, n = 2;
    // arr = new int *[m];
    // for (int i = 0; i < m; i++)
    // {
    //     arr[i] = new int[n];
    //     for (int j = 0; j < n; j++)
    //         arr[i][j] = i;
    // }
    // print(arr, m, n);

    // // Using Array of Pointers
    // int m = 3, n = 2;
    // int *arr[m];
    // for (int i = 0; i < m; i++)
    // {
    //     arr[i] = new int[n];
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = i;
    //         cout << arr[i][j] << " ";
    //     }
    // }

    // // Using array of Vectors
    // int m = 3, n = 2;
    // vector<int> arr[m];
    // for (int i = 0; i < m; i++)
    //     for (int j = 0; j < n; j++)
    //         arr[i].push_back(i);
    // print(arr, m);

    // Using vector of Vectors
    int m = 3, n = 2;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
            v.push_back(i);
        arr.push_back(v);
    }
    print(arr);

    return 0;
}