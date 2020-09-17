#include <iostream>
#include <unordered_set>

using namespace std;

int countDist(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    return s.size();
}

int main()
{
    int arr[] = {5, 12, 13, 18, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDist(arr, n) << endl;

    return 0;
}