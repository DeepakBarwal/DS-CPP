#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {10, 20, 30, 19, 43, 32};
    int found = linearSearch(arr, 6, 19);
    if (found != -1)
        cout << "Element found at position " << found + 1 << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}