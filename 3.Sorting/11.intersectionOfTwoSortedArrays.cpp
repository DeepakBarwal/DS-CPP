#include <iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (i > 0 && a[i - 1] == a[i])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {2, 5, 8, 13, 15};
    int b[] = {1, 3, 8, 15, 18, 20, 25};
    intersection(a, b, 5, 7);
    cout << endl;

    return 0;
}