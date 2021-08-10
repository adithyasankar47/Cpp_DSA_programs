#include <iostream>
using namespace std;
int main()
{
    long x = 73;
    int i = 1, j = 6;
    if (((x >> i) & 1) != ((x >> j) & 1))
    {
        unsigned long bitmask = (1L << i) | (1L << j);
        x ^= bitmask;
    }
    cout << x << endl;
    return 0;
}
