#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
};

bool myCmp(Point p1, Point p2)
{
    return (p1.x < p2.x);
}

int main()
{

    int arr[] = {10, 20, 5, 7};
    std::sort(arr, arr + 4);
    for (int x : arr)
        cout << x << " ";

    cout << endl;
    std::sort(arr, arr + 4, greater<int>());
    for (int x : arr)
        cout << x << " ";

    Point arr1[] = {{3, 10}, {2, 8}, {5, 4}};
    sort(arr1, arr1 + 3, myCmp);
    cout << endl;
    for (auto w : arr1)
        cout << w.x << ", " << w.y << " "
             << " || ";

    return 0;
}