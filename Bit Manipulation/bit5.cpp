#include <iostream>
using namespace std;
int main()
{
    unsigned long x = 10;
    const int ws = 16;
    const int bm = 0xFFFF;
    int n = (x >> (3 * ws)) ^ ((x >> (2 * ws)) & bm) ^ ((x >> (1 * ws)) & bm) ^ (x & bm);
    cout << n << endl;
    return 0;
}
//Reverse bits 5.3