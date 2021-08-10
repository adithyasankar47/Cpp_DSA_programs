#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {3, 5, 6, 2};
    int e = 0, o = 3;
    while (e < o)
    {
        if (arr[e] % 2 == 0)
            ++e;
        else
        {
            swap(arr[e], arr[o]);
            o--;
        }
    }
    for (int i = 0; i < 4; ++i)
        cout << arr[i] << " ";
    return 0;
}
