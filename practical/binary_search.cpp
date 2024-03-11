#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid;
    while(start <= end){
        mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,4,7,9,34,78,99};
    int findElement=binarySearch(arr, 7, 99);
    if(findElement == -1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index : "<<findElement<<endl;
    }
    return 0;
}

