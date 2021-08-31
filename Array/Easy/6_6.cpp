#include <iostream>
using namespace std;
int main()
{
    int s[10] = {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
    int min_price = INT16_MAX, max_profit = 0;
    for (int i = 0; i < 10; ++i)
    {
        int daily_profit = s[i] - min_price;
        max_profit = max(max_profit, daily_profit);
        min_price = min(min_price, s[i]);
    }
    cout << max_profit;
    return 0;
}