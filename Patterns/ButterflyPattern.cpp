#include<iostream>
using namespace std;

/*

*       *
**     **
***   ***
**** ****
*********
*********
**** ****
***   ***
**     **
*       *

*/

int main(){
    int columns=5;
    int rows=(columns+1)/2;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(j>i && j<=columns-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int x=rows;x>=1;x--){
        for(int y=1;y<=columns;y++){
            if(y>x && y<=columns-x){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }


    return 0;
}