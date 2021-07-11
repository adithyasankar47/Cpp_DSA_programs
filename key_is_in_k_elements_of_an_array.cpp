#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool iskey(int arr[], int n, int x, int k)
{
    int d = 0;
    for(int i=0; i<n; i=i+k)
    {
        int flag = 0;
        for(int j=i; j<i+k; ++j)
            if(arr[j] == x)
                flag = 1;
        if(flag != 1)
            d = 1;
    }
    if (d==0)
        return true;
    else
        return false;
}
int main()
{
    int arr[] = {3,5,2,8,3,2};
    int n = 6;
    int x = 3;
    int k = 3;
    cout<<iskey(arr,n,x,k)<<endl;
    return 0;
}