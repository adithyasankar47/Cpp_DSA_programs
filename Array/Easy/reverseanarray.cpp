#include <iostream>
using namespace std;
void reverse(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, 0, 3);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}