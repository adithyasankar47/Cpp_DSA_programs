#include <iostream>
using namespace std;
int BinarySearch(int arr[], int left, int right, int n, int key){
    int mid=(left+right)/2;
    if(arr[mid]==key)
        return mid;
    else if(left<=right && arr[mid]!=key){
        if(arr[mid]<key)  BinarySearch(arr,left,mid-1,n,key);
        else BinarySearch(arr,mid+1,right,n,key);
    }
    else 
        return -1;
}
int main()
{
    int arr[]={1,2,3};
    cout<<BinarySearch(arr,0,3,3,2);
    return 0;
}
