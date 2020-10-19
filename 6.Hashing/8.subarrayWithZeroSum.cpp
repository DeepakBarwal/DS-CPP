#include <iostream>
#include <unordered_set>
using namespace std;

bool isSum(int arr[], int n)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (s.find(pre_sum) != s.end())
            return true;
        if (pre_sum == 0)
            return true;
        s.insert(pre_sum);
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 13, -3, -10, 5};
    cout << boolalpha << isSum(arr, 6) << endl;

    return 0;
}