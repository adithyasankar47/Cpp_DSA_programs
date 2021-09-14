#include <iostream>
using namespace std;
void Union(int a[], int b[], int la, int lb)
{
    int i = 0, j = 0;
    while (i < la && j < lb)
    {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else if (b[j] < a[i])
            cout << b[j++] << " ";
        else
        {
            cout << a[i++] << " ";
            ++j;
        }
    }
    while (i < la)
        cout << a[i++] << " ";
    while (j < lb)
        cout << b[j++] << " ";
}
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 4};
    int la = sizeof(a) / sizeof(a[0]);
    int lb = sizeof(b) / sizeof(b[0]);

    Union(a, b, la, lb);
    return 0;
}