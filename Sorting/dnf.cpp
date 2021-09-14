#include <iostream>
using namespace std;
int main()
{
    int A[5] = {8, 7, 2, 3, 4};
    int pivot = A[0];
    int l = 0, m = 4;
    while (l < m)
    {
        if (pivot == A[0])
            swap(A[0], A[m]);
        if (A[l] > pivot)
            swap(A[l], A[m--]);
        else if (A[l] == pivot)
            swap(A[l++], A[m]);
    }
    for (int i = 0; i < 5; ++i)
        cout << A[i] << " ";
    return 0;
}