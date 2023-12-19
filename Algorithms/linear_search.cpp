#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[] = {4,5,6,7,8,9,10,15};
    int size = sizeof(array)/sizeof(int);
    int target;
    cout<<"Enter your target element : ";
    cin>>target;
    int index = linearSearch(array, size, target);
    if(index==-1){
        cout<<target<<" NOT FOUND"<<endl;
    }else{
        cout<<target<<" found at index : "<<index<<endl;
    }
    return 0;
}