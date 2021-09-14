#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Rotate(array<int, 4> arr, int len)
{
    int x = arr.back();
    int tmp;
    for (int i = len - 1; i > 0; --i)
        arr[i] = arr[i - 1];
    arr[0] = x;
    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    array<int, 4> arr = {1, 4, 5, 7};
    int len = arr.size();
    Rotate(arr, len);

    return 0;
}