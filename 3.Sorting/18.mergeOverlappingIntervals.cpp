#include <iostream>
#include <algorithm>
using namespace std;

struct Interval
{
    int st, end;
};

bool myCmp(Interval i1, Interval i2)
{
    return i1.st < i2.st;
}

void mergeIntervals(Interval arr[], int n)
{
    sort(arr, arr + n, myCmp);
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res].end >= arr[i].st)
        {
            arr[res].end = max(arr[res].end, arr[i].end);
            arr[res].st = min(arr[res].st, arr[i].st);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }
    for (int i = 0; i <= res; i++)
        cout << arr[i].st << " " << arr[i].end << endl;
}

int main()
{
    Interval arr[] = {{5, 10}, {3, 15}, {18, 30}, {2, 7}};
    mergeIntervals(arr, 4);

    return 0;
}