#include <iostream>

using namespace std;

void towerOfHanoi(int n, char S, char I, char D)
{
    if (n == 1)
    {
        cout << "Move 1 disk from " << S << " to " << D << endl;
        return;
    }
    towerOfHanoi(n - 1, S, D, I);
    cout << "Move " << n << " disk from " << S << " to " << D << endl;
    towerOfHanoi(n - 1, I, S, D);
}

int main()
{

    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}