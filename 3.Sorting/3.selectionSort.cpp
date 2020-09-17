#include <iostream>
#include <algorithm>

using namespace std;

void selectSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[min_index], arr[i]);
    }
}

int main()
{

    int arr[] = {1, 23, 2, 12, 43, 19};
    selectSort(arr, 6);
    for (auto x : arr)
        cout << x << " ";

    return 0;
}