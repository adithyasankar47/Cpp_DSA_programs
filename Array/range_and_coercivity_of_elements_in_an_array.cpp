//Given an array arr of integer elements, the task is to find the range and coefficient of range of the given array where: 
//Range: Difference between the maximum value and the minimum value in the distribution. 
//Coefficient of Range: (Max – Min) / (Max + Min).
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//function to get maximum value
float getMax(int arr[], int n)
{
    return *max_element(arr, arr+n);
}

//function to get minimum value
float getMin(int arr[], int n)
{
    return *min_element(arr, arr+n);
}

//function to find range and coefficiency and display them
void rangeAndCoefficiency(int arr[], int n)
{
    float max = getMax(arr,n);
    float min = getMin(arr,n);
    float range = max-min;
    float coefficiency = range/(max+min);
    cout<<"Range is: "<<range<<endl;
    cout<<"Coefficiency is: "<<coefficiency<<endl; 
}

//main function
int main()
{
    int arr[] = {222,554,6675,24,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    rangeAndCoefficiency(arr,n); 
    return 0;
}