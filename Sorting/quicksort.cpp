#include <iostream>
using namespace std;
int Partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int partitionIndex = start;
    for (int i = start; i < end; ++i)
        if (arr[i] <= pivot)
            swap(arr[i], arr[partitionIndex++]);
    swap(arr[partitionIndex], arr[end]);
    return partitionIndex;
}
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int partitionIndex = Partition(arr, start, end);
        quickSort(arr, start, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, end);
    }
}
int main()
{
    int arr[] = {3, 7, 2, 56, 23, 888, 3464, 31};
    int len = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, len);
    for (int i = 0; i < 8; ++i)
        cout << arr[i] << " ";
    return 0;
}