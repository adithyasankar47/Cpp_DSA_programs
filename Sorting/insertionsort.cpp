#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int value,hole;
    int arr[] = {235,2124235,125,235,185,244};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<len; ++i) 
    {
        value = arr[i];
        hole = i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
    for(int i=1; i<len; ++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}