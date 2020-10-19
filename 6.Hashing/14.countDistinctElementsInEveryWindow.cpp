#include <iostream>
#include <unordered_map>
using namespace std;

void countDist(int arr[], int n, int k)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < k; i++)
        freq[arr[i]]++;
    cout << freq.size() << " ";
    for (int i = k; i < n; i++)
    {
        freq[arr[i - k]]--;
        if (freq[arr[i - k]] == 0)
            freq.erase(arr[i - k]);
        freq[arr[i]]++;
        cout << freq.size() << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 10, 10, 30, 40};
    countDist(arr, 6, 4);

    return 0;
}