#include <iostream>
using namespace std;
void sortArray(int arr[], int n)
{
    int newarr[n];
    int n0 = 0, n1 = 0, n2 = 0;
    for(int i=0; i<n; ++i)
    {
        if(arr[i] == 0)
        {
            ++n0;
        }   
        else if (arr[i] == 1)
        {
            ++n1;
        }   
        else
        {
            ++n2;
        }     
    }
    for(int i =0;i<n0;++i)
    {
        newarr[i] = 0;
        cout<<newarr[i]<<" ";
    }    
    for(int i = n0;i<n1+n0;++i)
    {
        newarr[i] = 1;
        cout<<newarr[i]<<" ";
    }
    for(int i = n1+n0; i<n1+n2+n0;++i)
    {
        newarr[i] = 2;
        cout<<newarr[i]<<" ";
    }
}
int main()
{
    int arr[] = {0,1,2,0,1,1,1,0,0,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr, n); 
    return 0;
}
