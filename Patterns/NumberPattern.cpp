#include<iostream>
using namespace std;

/*

    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 

*/

int main(){
    int rows;

    cout<<"No. of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        for(int space=1; space<=rows-i;space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}