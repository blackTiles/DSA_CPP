#include<bits/stdc++.h>
#include<vector>
using namespace std;

struct Heap{
    int *heapArray;
    int capacity;
    int size;
};

Heap* createHeap(int capacity){
    Heap *heap = new Heap;
    heap->capacity = new int[9];
    heap->size=0;
    return heap;
}

int main(){
    return 0; 
}
