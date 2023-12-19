#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0;j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int array[] = {5,1,2,3,8,9,24,15};
    int size = sizeof(array)/sizeof(int);
    bubbleSort(array, size);
    for(int i=0; i<size; i++){
        cout<<array[i]<<", ";
    }
    cout<<endl;
    return 0;
}