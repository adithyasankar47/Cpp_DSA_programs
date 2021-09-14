#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int left = 0, right = n-1, mid = (left + right) / 2;
    while(left<=right && arr[mid]!=key){
        if(key<arr[mid])
            right=mid-1;
        else
            left=mid+1;
        mid=(left+right)/2;
    }
    if(left>right)
        return -1;
    return arr[mid];
}
int main(){
    int arr[] = {1, 2, 3, 6, 325, 23, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<BinarySearch(arr,n,4);
    return 0;
}