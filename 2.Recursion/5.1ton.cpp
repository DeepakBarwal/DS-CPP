#include <iostream>

using namespace std;

// void fun(int n)
// {
//     if (n <= 0)
//         return;
//     fun(n - 1);
//     cout << n << " ";
// }

// tail recursion
void fun(int n, int k = 1)
{
    if (n < 1)
        return;
    cout << k << " ";
    fun(n - 1, k + 1);
}

int main()
{

    fun(5);

    return 0;
}