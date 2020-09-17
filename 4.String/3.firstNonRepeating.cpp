#include <bits/stdc++.h>

using namespace std;

int firstNonRepeat(string str)
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
            firstIndex[str[i]] = -2;
    }
    for (int i = 0; i < 256; i++)
        if (firstIndex[i] >= 0)
            res = min(res, firstIndex[i]);
    return (res == INT_MAX) ? -1 : res;
}

int main()
{

    cout << firstNonRepeat("geeksforgeeks") << endl;
    cout << firstNonRepeat("abcabc") << endl;

    return 0;
}