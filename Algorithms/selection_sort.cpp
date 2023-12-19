#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    int indexOfMin;
    for(int i=0;i<size-1;i++){
        indexOfMin = i;
        for(int j=i+1;j<size; j++){
            if(arr[j]<arr[indexOfMin]){
                indexOfMin = j;
            }
        }
        swap(arr[i], arr[indexOfMin]);
    }
}

int main(){
    int array[] = {5,1,2,3,8,9,24,15};
    int size = sizeof(array)/sizeof(int);
    selectionSort(array, size);
    for(int x=0; x<size; x++){
        cout<<array[x]<<", ";
    }
    cout<<endl;
    return 0;
}