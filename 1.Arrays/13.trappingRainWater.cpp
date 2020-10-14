#include <iostream>
#include <algorithm>

using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;
    int lMax[n];
    int rMax[n];
    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        lMax[i] = max(arr[i], lMax[i - 1]);
    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rMax[i] = max(arr[i], rMax[i + 1]);
    for (int i = 0; i < n; i++)
        res = res + min(lMax[i], rMax[i]) - arr[i];
    return res;
}

int main()
{
    int arr[] = {5, 0, 6, 2, 3};
    cout << getWater(arr, 5) << endl;

    return 0;
}