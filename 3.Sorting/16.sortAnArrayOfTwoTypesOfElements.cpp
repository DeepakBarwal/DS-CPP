#include <iostream>
using namespace std;

// Segregate -ve and +ve, even and odd, sort a binary array

void sort(int arr[], int n)
{
    int i = -1, j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] >= 0);
        if (i >= j)
            return;
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {-12, 10, -10, 15};
    sort(arr, 4);
    for (int x : arr)
        cout << x << " ";

    return 0;
}