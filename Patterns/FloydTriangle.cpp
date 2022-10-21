#include<iostream>
using namespace std;

/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

int main(){
    int lines, current_num = 1;
    cout<<"No. of lines: ";
    cin>>lines;
    for(int i=1; i<=lines; i++){
        for(int j=1;j<=i;j++){
            cout<<current_num<<" ";
            current_num++;
        }
        cout<<endl;
    }
    return 0;
}