#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter prime till ";
    cin >> n;
    int *a = new int[n + 1];
    for (int i = 0; i <= n; ++i)
        *(a + i) = 0;
    for (int i = 2; i <= n; ++i)
        for (int j = i * i; j <= n; j = j + i)
            if (*(a + j) == 0)
                *(a + j) = 1;
    for (int i = 2; i <= n; ++i)
        if (*(a + i) == 0)
            cout << i << " ";
    delete[] a;
    a = NULL;
    return 0;
}