#include<iostream>
using namespace std;

/*

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/

int main(){
    int rows;

    cout<<"No. of rows: ";
    cin >> rows;

    int cols = (rows*2)-1;

    for(int i=1;i<=rows;i++){
        for(int space=1; space<=rows-i;space++){
            cout<<"  ";
        }
        for(int j=1;j<=(i*2)-1;j++){
            if(i==rows){
                cout<<"*"<<" ";
            }
            else{
                if(j>1 && j<(i*2)-1){
                    cout<<"  ";
                }
                else{
                    cout<<"*"<<" ";
                } 
            }
        }
        cout<<endl;
    }

    return 0;
}