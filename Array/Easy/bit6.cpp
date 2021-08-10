#include <iostream>
using namespace std;
int main()
{
    unsigned long x = 7;
    for (int i = 0; i < 63; ++i)
    {
        if (((x >> i) & 1) != ((x >> (i + 1)) & 1))
        {
            x ^= (1UL << i) | (1UL << (i + 1));
            break;
        }
    }
    cout << x << endl;
    return 0;
}
//Swapping digits 5.4