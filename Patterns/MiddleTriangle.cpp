#include<iostream>
using namespace std;


/*

    *    
   ***   
  *****  
 ******* 

*/

int main(){
    int rows;

    cout<<"No. of rows: ";
    cin >> rows;

    int cols=(rows*2)+1;

    for(int x=rows;x>=1;x--){
        for(int y=1;y<=cols;y++){
            if(y>x && y<=cols-x){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}