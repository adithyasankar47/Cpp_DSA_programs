#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    unsigned long x = 10;
    int ans = 0;
    while (x)
    {
        if (x % 2 == 0)
            ans++;
        x >>= 1;
    }
    cout << ans << endl;
    cout << bitset<8>(ans) << endl;
    ;

    return 0;
}