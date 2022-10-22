#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int original_num = num;

    int size_of_num = 0;

    while(num>0){
        num = num/10;
        size_of_num++;
    }

    int sum = 0;
    num = original_num;
    while(num>0){
        int one_digit = num%10;
        sum += pow(one_digit, size_of_num);
        num = num/10;
    }

    if(original_num == sum){
        cout<<original_num<<" is an Armstrong Number"<<endl;
    }
    else{
        cout<<original_num<<" is not an Armstrong Number"<<endl;
    }

    return 0;
}