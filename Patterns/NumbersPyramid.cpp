#include<iostream>
using namespace std;

/*

1
22
333
4444
55555

*/

int main(){
    int lines;
    cout<<"No. of lines: ";
    cin>>lines;
    for(int i=1; i<=lines; i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}