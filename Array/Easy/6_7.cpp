#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int s[10] = {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
    vector<int> dp(10, 0);
    int ma = s[9];
    int mi = s[0];
    for (int i = 8; i >= 0; i--)
    {
        if (s[i] > ma)
            ma = s[i];
        dp[i] = max(dp[i + 1], ma - s[i]);
    }
    for (int i = 1; i < 10; ++i)
    {
        if (s[i] < mi)
            mi = s[i];
        dp[i] = max(dp[i - 1], dp[i] + (s[i] - mi));
    }
    cout << dp.back();
    return 0;
}