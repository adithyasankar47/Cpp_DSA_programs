#include <iostream>
using namespace std;
int main()
{
    int A[5] = {7, 7, 2, 3, 4};
    int pivot = A[0];
    int n = sizeof(A) / sizeof(A[0]);
    int smallest = 0, equal = 0, largest = n - 1;

    while (equal <= largest)
    {
        if (A[equal] < pivot)
            swap(A[equal++], A[smallest++]);
        else if (A[equal] == pivot)
            equal++;
        else
            swap(A[equal], A[largest--]);
    }
    for (int i = 0; i < n; ++i)
        cout << A[i] << " ";
    return 0;
}