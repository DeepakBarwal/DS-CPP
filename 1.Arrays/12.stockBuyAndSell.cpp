#include <iostream>

using namespace std;

int maxProfit(int prices[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
        if (prices[i] > prices[i - 1])
            profit += prices[i] - prices[i - 1];
    return profit;
}

int main()
{
    int prices[] = {1, 5, 3, 8, 12};
    cout << maxProfit(prices, 5) << endl;

    return 0;
}