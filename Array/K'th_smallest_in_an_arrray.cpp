//Given an array and a number k where k is smaller than the size of the array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ksmallest(int arr[], int n, int k)
{
     // Sort the given array
    sort(arr, arr + n);
 
    // Return k'th element in the sorted array
    return arr[k-1];

}
int main()
{
    int k = 2;
    int arr[] = {2,3,95,242,5687};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"k\'th smallest element is:"<<ksmallest(arr,n,k)<<endl;
    return 0;
}