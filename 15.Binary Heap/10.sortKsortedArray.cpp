#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

void sortK(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i <= k; i++)
        pq.push(arr[i]);
    int index = 0;
    for (int i = k + 1; i < n; i++)
    {
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while (pq.empty() == false)
    {
        arr[index++] = pq.top();
        pq.pop();
    }
}

int main()
{
    int arr[] = {9, 8, 7, 18, 19, 17};
    sortK(arr, 6, 2);
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}