#include <iostream>
using namespace std;

bool isPair(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        if (arr[left] + arr[right] == x)
            return true;
        else if (arr[left] + arr[right] > x)
            right--;
        else
            left++;
    }
    return false;
}

bool isTriplet(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (isPair(arr, i + 1, n - 1, x - arr[i]))
            return true;
    return false;
}

int main()
{
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    cout << boolalpha << isTriplet(arr, 7, 32) << endl;

    return 0;
}