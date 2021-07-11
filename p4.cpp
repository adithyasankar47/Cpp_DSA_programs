#include <iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    if(n==1)
        return true;
    bool restarray = isSorted(arr+1,n-1);
    return(arr[0]<arr[1] && restarray);
}
int main()
{
    int arr[] = {1,2,3};
    cout<<"Sample text"<<isSorted(arr,3)<<endl;
    return 0;
}
