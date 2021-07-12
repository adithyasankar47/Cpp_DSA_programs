#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n)
{
    return *max_element(arr,arr+n);
}
int getMin(int arr[], int n)
{
    return *min_element(arr, arr+n);
}
int main()
{
    int arr[] = {2,554,6675,24,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Max element is:"<<getMax(arr,n)<<endl;
    cout<<"Min element is:"<<getMin(arr,n)<<endl;
    return 0;
}