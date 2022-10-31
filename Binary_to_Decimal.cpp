#include<iostream>
#include<math.h>
using namespace std;

int getLength(int num){
   int length = 0;
   while(num>0){
      num /= 10;
      length++;
   }
   return length;
}

int binaryToDecimal(int n){
   int len = getLength(n);
   int remainder;
   int decimal = 0;
   for(int i=0; i<len; i++){
      remainder = n % 2;
      decimal += remainder*pow(2,i);
      n /= 10;
   }
   return decimal;
}

int main(){
   int bin;
   cout<<"Enter the number in binary: ";
   cin>>bin;
   cout<<"Decimal number : "<<binaryToDecimal(bin)<<endl;
   return 0;
}