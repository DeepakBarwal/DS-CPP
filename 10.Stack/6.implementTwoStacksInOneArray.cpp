#include <iostream>
using namespace std;

struct TwoStacks
{
    int *arr, cap, top1, top2;
    TwoStacks(int n)
    {
        cap = n;
        top1 = -1;
        top2 = cap;
        arr = new int[n];
    }
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 < cap)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            exit(1);
        }
    }
};

int main()
{
    TwoStacks st(4);
    st.push1(10);
    st.push1(20);
    st.push2(30);
    st.push2(40);

    cout << "Popped element from stack1 is "
         << st.pop1();
    st.push2(40);
    cout << "\nPopped element from stack2 is "
         << st.pop2();

    return 0;
}