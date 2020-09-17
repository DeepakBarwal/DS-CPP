#include <bits/stdc++.h>

using namespace std;

int firstRepeating(string str)
{
    int res = INT_MAX;
    int firstIndex[256];
    for (int i = 0; i < 256; i++)
        firstIndex[i] = -1;
    for (int i = 0; i < str.length(); i++)
    {
        if (firstIndex[str[i]] == -1)
            firstIndex[str[i]] = i;
        else
            res = min(res, firstIndex[str[i]]);
    }
    return (res == INT_MAX) ? -1 : res;
}

int main()
{

    cout << firstRepeating("geeksforgeeks") << endl;

    return 0;
}