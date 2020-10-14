#include <iostream>
using namespace std;

// // Recursive BinarySearch Implementation

// int firstOcc(int arr[], int low, int high, int x)
// {
//     if (low > high)
//         return -1;
//     int mid = (low + high) / 2;
//     if (x > arr[mid])
//         return firstOcc(arr, mid + 1, high, x);
//     else if (x < arr[mid])
//         return firstOcc(arr, low, mid - 1, x);
//     else
//     {
//         if (mid == 0 || arr[mid - 1] != arr[mid])
//             return mid;
//         else
//         {
//             return firstOcc(arr, low, mid - 1, x);
//         }
//     }
// }

// Iterative BinarySearch Implementation

int firstOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 10, 10, 10, 20, 20, 40};
    int index = firstOcc(arr, 7, 20);
    cout << index << endl;

    return 0;
}