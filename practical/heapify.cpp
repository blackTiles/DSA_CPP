#include <bits/stdc++.h>
// #include <vector>
using namespace std;

void heapify(vector<int> &arr,int N, int currentIndex)
{
    int largest = currentIndex;
    int left = 2 * currentIndex + 1;
    int right = 2 * currentIndex + 2;

    if(left<N && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<N && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest != currentIndex){
        swap(arr[currentIndex], arr[largest]);
        heapify(arr, N, largest);
    }
}

void build_heap(vector<int> &arr)
{
    int startIndex = (arr.size() / 2) - 1;
    cout<<startIndex<<endl;
    for (int i = startIndex; i >= 0; i--)
    {
        heapify(arr, arr.size(), i);
    }
}

void display(vector<int> &arr){
    for(int i =0;i<arr.size();i++){
        cout<<i<<"--"<<arr[i]<<endl;
    }
}

int main()
{
    vector<int> arr{1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    // display(arr);
    build_heap(arr);
    display(arr);

    return 0;
}