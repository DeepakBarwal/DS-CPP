#include <iostream>

using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n >= cap)
        return n;
    int idx = pos - 1;
    for (int i = n - 1; i <= idx; i++)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
}

int main()
{

    int arr[4] = {10, 20, 40};
    cout << insert(arr, 3, 30, 4, 3) << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}