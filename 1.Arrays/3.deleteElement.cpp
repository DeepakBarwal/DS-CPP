#include <iostream>

using namespace std;

int deleteElement(int arr[], int n, int x)
{

    if (arr[n - 1] == x)
        return n - 1;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }
    if (i == n)
        return n;
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}

int main()
{

    int arr[] = {10, 20, 30, 40};
    cout << deleteElement(arr, 4, 30) << endl;
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";

    return 0;
}