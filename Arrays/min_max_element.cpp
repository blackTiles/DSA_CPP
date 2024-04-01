#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {45, 34, 23, 12, 67, 78, 12};
    int size = sizeof(arr) / sizeof(int);
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout<<"Min: "<<min<<" Max: "<<max<<endl;
    return 0;
}