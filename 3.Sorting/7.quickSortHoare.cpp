#include <iostream>
#include <algorithm>

using namespace std;

int hPartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

void qSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = hPartition(arr, l, h);
        qSort(arr, l, p);
        qSort(arr, p + 1, h);
    }
}

int main()
{

    int arr[] = {80, 4, 7, 9, 3, 10, 5};
    qSort(arr, 0, 6);
    for (int x : arr)
        cout << x << ' ';

    return 0;
}