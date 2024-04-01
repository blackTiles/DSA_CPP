#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while ((end - start) >= 1)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    for (int &i : arr)
    {
        cout << i << ",";
    }
    cout << endl;
    reverseArray(arr, size);
    for (int &i : arr)
    {
        cout << i << ",";
    }
    cout << endl;
    return 0;
}