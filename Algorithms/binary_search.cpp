#include<iostream>
using namespace std;

void binarySearch(int arr[], int size, int target){
    bool targetFound=false;
    int mid, startIndex = 0, endIndex = size-1;
    while(startIndex <= endIndex){
        mid = (startIndex+endIndex)/2;
        if(target<arr[mid]){
            endIndex = mid-1;
        }
        else if(target>arr[mid]){
            startIndex = mid+1;
        }
        else{
            cout<<target<<" found at index : "<<mid<<endl;
            targetFound = true;
            break;
        }
    }

    if(!targetFound){
        cout<<target<<" NOT FOUND"<<endl;
    }
}

int main(){
    int array[] = {4,5,6,7,8,9,10,15};
    int size = sizeof(array)/sizeof(int);
    int target;
    cout<<"Enter your target element : ";
    cin>>target;
    binarySearch(array, size, target);
    return 0;
}
