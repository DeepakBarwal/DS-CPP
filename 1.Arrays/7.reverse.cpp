#include <iostream>

using namespace std;

void reverse(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40};
    reverse(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}