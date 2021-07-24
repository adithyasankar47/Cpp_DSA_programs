#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp, counter=0;
    int arr[] = {1,4,5,6,72,7346,1243};
    int len = sizeof(arr)/ sizeof(arr[0]);
    
    while(counter<len)
    {
        for(int i=0; i<len-counter; ++i)
        {
            if(arr[i]>arr[i+1])
            {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
        ++counter;
    }
    for(int i=0; i<len; ++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}