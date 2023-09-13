#include <iostream>
using namespace std;
int peakMountainIndex(int arr[],int n){
    int s=0,e=n-1,mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
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
    int arr[] = {6, 7, 9, 8, 7, 5, 3};
    int size=sizeof(arr)/sizeof(int);
    int peak=peakMountainIndex(arr,size);
    cout<<arr[peak];
    return 0;
}