#include <iostream>

using namespace std;

bool isPow2(int n)
{
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main()
{
    cout << boolalpha << isPow2(4) << endl;
    cout << boolalpha << isPow2(6) << endl;

    return 0;
}