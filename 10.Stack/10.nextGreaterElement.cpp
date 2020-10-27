#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> nextGreater(int arr[], int n)
{
    stack<int> s;
    vector<int> v;
    s.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
        int ng = s.empty() ? -1 : s.top();
        v.push_back(ng);
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    v.push_back(-1);
    return v;
}

int main()
{
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
    vector<int> res = nextGreater(arr, 8);
    for (int x : res)
        cout << x << " ";

    return 0;
}