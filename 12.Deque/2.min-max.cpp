#include <iostream>
#include <queue>

using namespace std;

struct myDS
{
    deque<int> dq;
    void insertMin(int x)
    {
        dq.push_front(x);
    }
    void insertMax(int x)
    {
        dq.push_back(x);
    }
    int getMin()
    {
        return dq.front();
    }
    int getMax()
    {
        return dq.back();
    }
    auto extractMin()
    {
        return dq.pop_front();
    }
    auto extractMax()
    {
        return dq.pop_back();
    }
};

int main()
{
    myDS mm;
    mm.insertMin(10);
    mm.insertMax(15);
    mm.insertMin(5);
    mm.extractMin();
    mm.extractMax();
    mm.insertMin(8);

    return 0;
}