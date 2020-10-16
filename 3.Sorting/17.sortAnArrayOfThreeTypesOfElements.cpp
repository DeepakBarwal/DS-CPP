#include <iostream>
#include <algorithm>
using namespace std;

// Sort an array of 0's, 1's and 2's OR 3 way partitioning when multiple occurrences of pivot may exist OR Partitioning around a range.
void sort(int arr[], int n)
{
    int lo = 0, hi = n - 1, mid = 0;
    while (mid <= hi)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[lo], arr[mid]);
            lo++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[hi]);
            hi--;
            break;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 1, 1, 2};
    sort(arr, 6);
    for (int x : arr)
        cout << x << " ";

    return 0;
}