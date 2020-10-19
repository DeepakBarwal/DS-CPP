#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int maxLen(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int pre_sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (pre_sum == sum)
            res = i + 1;
        if (m.find(pre_sum) == m.end())
            m.insert({pre_sum, i});
        if (m.find(pre_sum - sum) != m.end())
            res = max(res, i - m[pre_sum - sum]);
    }
    return res;
}

int longestSub(int a[], int b[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = a[i] - b[i];
    int res = maxLen(temp, n, 0);
    return res;
}

int main()
{
    int a[] = {0, 1, 0, 0, 0, 0};
    int b[] = {1, 0, 1, 0, 0, 1};
    cout << longestSub(a, b, 6) << endl;

    return 0;
}