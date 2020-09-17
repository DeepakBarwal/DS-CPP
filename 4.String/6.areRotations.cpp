#include <bits/stdc++.h>

using namespace std;

bool areRotations(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    s1 = s1 + s1;
    return (s1.find(s2) != string::npos);
}

int main()
{

    cout << areRotations("ABCD", "CDAB") << endl;

    return 0;
}