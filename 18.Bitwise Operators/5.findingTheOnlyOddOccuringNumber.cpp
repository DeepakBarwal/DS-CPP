#include <iostream>

using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res = res ^ arr[i];
    return res;
}

// Variation Question: find missing number in array of n elements. Numbers in range 1 to n+1
int findMissing(int arr[], int n)
{
    int res1 = 0, res2 = 0, res = 0;
    for (int i = 0; i < n; i++)
        res1 = res1 ^ arr[i];
    for (int i = 1; i <= n + 1; i++)
        res2 = res2 ^ i;
    res = res1 ^ res2;
    return res;
}

int main()
{
    // int arr[] = {4, 3, 4, 4, 4, 5, 5};
    // cout << findOdd(arr, 5) << endl;

    int arr[] = {1, 4, 3};
    cout << findMissing(arr, 3) << endl;
    int arr1[] = {1, 5, 3, 2};
    cout << findMissing(arr1, 4) << endl;

    return 0;
}