#include<iostream>
using namespace std;

/*

1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 

*/

int main(){
    int lines, count=0;
    cout<<"Enter no. of lines: ";
    cin>>lines;
    for(int i=1; i<=lines; i++){
        for(int j=1;j<=i;j++){
            if(count%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
            count++;
        } 
        cout<<endl;
    }
    return 0;
}