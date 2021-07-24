#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    int arr[] = {1,4,5,6,72,7346,1243};
    int len = sizeof(arr)/ sizeof(arr[0]);
    for(int i=1;i <len; ++i)
    {
        for(int j=0; j<i; ++j)
        {
            if(arr[j] > arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int i=0; i<len; ++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}