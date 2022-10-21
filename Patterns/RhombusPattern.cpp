#include<iostream>
using namespace std;

/*

     * * * * * * 
    * * * * * * 
   * * * * * * 
  * * * * * * 
 * * * * * * 

*/

int main(){
    int rows;

    cout<<"No. of rows: ";
    cin >> rows;

    int cols=rows;

    for(int i=rows;i>=1;i--){
        for(int space=i-1; space>=0;space--){
            cout<<" ";
        }
        for(int j=0;j<=cols;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}