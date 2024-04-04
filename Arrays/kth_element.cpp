#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int quickSelect(int arr[], int low, int high, int k)
{
    if (k > high + 1)
        return -1;
    if (low == high)
        return arr[low];
    int pi = partition(arr, low, high);
    if (pi == k)
        return arr[pi];
    else if (k < pi)
        return quickSelect(arr, low, pi - 1, k);
    else
        return quickSelect(arr, pi + 1, high, k);
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int element = quickSelect(arr, 0, arr_size - 1, k - 1);
    if (element == -1)
        cout << "does not exist" << endl;
    else
        cout << "The " << k << "-th smallest element is: " << element << endl;
    return 0;
}