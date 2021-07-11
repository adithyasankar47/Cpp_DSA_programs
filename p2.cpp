#include <iostream>
using namespace std;
bool check(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool rest=check(arr+1,n-1);
    return ((arr[0]<arr[1]) && rest );
}   
int main()
{
    int arr[]={1,5,3,4};
    cout<<check(arr,4)<<endl;
    return 0;
}