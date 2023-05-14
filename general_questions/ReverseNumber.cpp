#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int reverse = 0;
    while(num > 0){
        int lastdigit = num%10;
        num = num/10;
        reverse = reverse * 10 + lastdigit;
    }

    cout<<"Reversed : "<<reverse<<endl;
    
    return 0;
}


// Alternate solution 

// int main(){
//     string num;
//     cout<<"Enter number: ";
//     cin>>num;
//     string reversedString = "";
//     for(int i=num.size()-1; i>=0; i--){
//         reversedString += num[i];
//     }
//     int reverse = stoi(reversedString);
//     cout<<reverse<<endl;
//     return 0;
// }