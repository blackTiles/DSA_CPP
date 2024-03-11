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

void deleteNode(vector<int> &hT, int num) {
    int size = hT.size();
    int i;
    for(i=0; i<size; i++) {
        if(num==hT[i]) {
            break;
        }
    }
    swap(&hT[i], &hT[size-1]);
    hT.pop_back();
    for(int i=size/2-1; i>=0; i--) {
        heapify(hT, i);
    }
}

void printArray(vector<int> &hT) {
    for(int i=0; i<hT.size(); i++) {
        cout<<hT[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> heapTree;
    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);
    cout<<"Max-Heap array: ";
    printArray(heapTree);
    deleteNode(heapTree, 4);
    cout<<"After deleting an element: ";
    printArray(heapTree);
    return 0;
}