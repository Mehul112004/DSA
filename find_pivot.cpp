#include <iostream>
using namespace std;
int pivotIndex(int arr[],int size){
    int s=0,e=size-1,mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[] = {9,10,11,12,2,4,5,6,8};
    int size=sizeof(arr)/sizeof(int);
    int pivot=pivotIndex(arr,size);
    cout<<arr[pivot];
    return 0;
}