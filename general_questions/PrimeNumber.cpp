#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int num){
    bool isPrime = true;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i == 0){
            isPrime = false;
            return isPrime;
        }
    }
    return isPrime;
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin >> number;
    if(number < 2){
        cout<<number<<" is not a Prime"<<endl;
    }
    else if(checkPrime(number)==true){
        cout<<number<<" is Prime"<<endl;
    }
    else{
        cout<<number<<" is not a Prime"<<endl;
    }
    return 0;
}
