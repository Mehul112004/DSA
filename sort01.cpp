#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void sort01(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[j]);
            j--;
        }
        // printArray(arr, n);
    }
}
int main()
{
    int arr[] = {0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(int);
    sort01(arr, size);
    cout << endl
         << "After sorting : " << endl;
    printArray(arr, size);
    return 0;
}