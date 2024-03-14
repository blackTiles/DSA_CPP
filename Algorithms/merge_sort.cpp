#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int n1=(mid-left)+1;
    int n2=right-mid;

    int a1[n1];
    int a2[n2];

    for(int i=0; i<n1; i++){
        a1[i]=arr[left+i];
    }
    for(int i=0; i<n2; i++){
        a2[i]=arr[mid+1+i];
    }

    int i = 0, j = 0, k = left;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            arr[k] = a1[i]; 
            i++;k++;
        }else{
            arr[k] = a2[j];
            j++; k++;
        }
    }

    while(i<n1){
        arr[k] = a1[i];
        i++;k++;
    }

    while(j<n2){
        arr[k] = a2[j];
        j++;k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    for(int i=0; i<arr_size;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    return 0;
}