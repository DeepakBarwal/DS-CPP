#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    int count[256] = {0};
    for (int i = 0; i < s1.length(); i++)
        count[s1[i]]++;
    for (int i = 0; i < s1.length(); i++)
        count[s2[i]]--;
    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            return false;
    return true;
}

int main()
{

    string s1 = "geeks", s2 = "ekegs";
    bool res = isAnagram(s1, s2);
    if (res)
        cout << "Strings " << s1 << " and " << s2 << " are anagrams." << endl;
    else
        cout << "Strings " << s1 << " and " << s2 << " are not anagrams." << endl;

    return 0;
}