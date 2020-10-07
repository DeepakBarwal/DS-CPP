#include <iostream>

using namespace std;

// // Method 1: left-shift
// void kthBitSet(int n, int k)
// {
//     if (n & (1 << (k - 1)) != 0)
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
// }

// Method 2: right-shift
void kthBitSet(int n, int k)
{
    if (((n << (k - 1)) & 1) == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    kthBitSet(5, 1);
    kthBitSet(8, 2);

    return 0;
}