#include <iostream>
#include <unordered_map>

using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    int arr[] = {5, 12, 13, 18, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);

    return 0;
}