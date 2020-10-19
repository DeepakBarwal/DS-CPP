#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int lcs(int arr[], int n)
{
    unordered_set<int> s;
    int res = 0;

    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int curr = 1;
            while (s.find(arr[i] + curr) != s.end())
                curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    int arr[] = {3, 8, 4, 5, 7};
    cout << lcs(arr, 5) << endl;

    return 0;
}