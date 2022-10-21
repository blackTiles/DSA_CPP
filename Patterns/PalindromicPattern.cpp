#include<iostream>
using namespace std;

/*

        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 

*/

int main(){
    int rows;

    cout<<"No. of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        for(int space=1; space<=rows-i;space++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int k=1;k<=i;k++){
            if(k==1){
                continue;
            }
            else{
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}