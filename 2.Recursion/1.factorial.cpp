#include <iostream>

using namespace std;

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// tail recursive
int factorial(int n, int val = 1)
{
    if (n == 0)
        return val;
    return factorial(n - 1, n * val);
}

int main()
{

    cout << factorial(4) << endl;

    return 0;
}