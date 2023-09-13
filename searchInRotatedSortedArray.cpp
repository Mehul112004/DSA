#include <iostream>
using namespace std;
int pivotIndex(int arr[], int size)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int searchRotatedSorted(int arr[], int size, int p, int k)
{
    int s = 0, e = size - 1, mid;
    if (k >= arr[p] && k < arr[size - 1])
    {
        s = p, e = size - 1, mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (k == arr[mid])
            {
                return mid;
            }
            else if (k < arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
    }
    else
    {
        s = 0, e = p - 1, mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (k == arr[mid])
            {
                return mid;
            }
            else if (k < arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
    }
    return -1;
}
int main()
{
    int target = 5;
    int arr[] = {9, 10, 11, 12, 2, 3, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int p = pivotIndex(arr, size);
    int result = searchRotatedSorted(arr, size, p, target);
    cout << result;
    return 0;
}