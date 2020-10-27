#include <iostream>
using namespace std;

struct kStacks
{
    int *arr, *top, *next;
    int k, freeTop, cap;
    kStacks(int k1, int n)
    {
        k = k1, cap = n;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        for (int i = 0; i < cap; i++)
            top[i] = -1;
        freeTop = 0;
        for (int i = 0; i < cap - 1; i++)
            next[i] = i + 1;
        next[cap - 1] = -1;
    }

    void push(int x, int sn)
    {
        int i = freeTop;
        freeTop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }

    int pop(int sn)
    {
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freeTop;
        freeTop = i;
        return arr[i];
    }
};

int main()
{
    // Let us create 3 stacks in an array of size 10
    int k = 3, n = 10;
    kStacks ks(k, n);

    // Let us put some items in stack number 2
    ks.push(15, 2);
    ks.push(45, 2);

    // Let us put some items in stack number 1
    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);

    // Let us put some items in stack number 0
    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);

    cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl;

    return 0;
}