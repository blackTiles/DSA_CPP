#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    int key, prev;
    for(int i=1;i<size; i++){
        key = arr[i];
        prev = i-1;
        while(prev>=0 && key<arr[prev]){
            arr[prev+1] = arr[prev];
            prev = prev-1;
        }
        arr[prev+1] = key;
    }
}

int main(){
    int array[] = {5,1,2,3,8,9,24,15};
    int size = sizeof(array)/sizeof(int);
    insertionSort(array, size);
    for(int i=0; i<size; i++){
        cout<<array[i]<<", ";
    }
    cout<<endl;
    return 0;
}