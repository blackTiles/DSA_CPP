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
    int start, end;
    cout<<"Enter start number & end number: ";
    cin >> start >> end;
    cout<<"Prime numbers between "<<start<<" and "<<end<<" are :- {";
    for(int number=start; number<=end; number++){
      if(number < 2){
        continue;
      }
      if(checkPrime(number)==true){
         cout<<number<<", ";
      }
    }
    cout<<"}"<<endl;

    return 0;
}
