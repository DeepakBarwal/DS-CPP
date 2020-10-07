#include <iostream>

using namespace std;

// // Naive Method: θ(Total Bits in n)
// int countSetBits(int n)
// {
//     int res = 0;
//     while (n > 0)
//     {
//         if ((n & 1) == 1)
//             res++;
//         n = n >> 1;
//     }
//     return res;
// }

// // Brian Kerningam's Algorithm: θ(Set Bits Count)
// int countSetBits(int n)
// {
//     int res = 0;
//     while (n > 0)
//     {
//         n = n & (n - 1);
//         res++;
//     }
//     return res;
// }

// Lookup Table Method for 32-bit numbers: θ(1)
int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 0; i < 256; i++)
        table[i] = (i & 1) + table[i / 2];
}

int countSetBits(int n)
{
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    return res;
}

int main()
{
    initialize();
    cout << countSetBits(5) << endl;
    cout << countSetBits(7) << endl;
    cout << countSetBits(13) << endl;
    cout << countSetBits(40) << endl;

    return 0;
}