#include <iostream>
using namespace std;
int main()
{
    unsigned long num = 10;
    int res = 0;
    while (num)
    {
        res += 1;
        num &= (num - 1);
    }
    cout << res << endl;
    return 0;
}
