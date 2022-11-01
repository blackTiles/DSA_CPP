#include<iostream>
#include<string>
using namespace std;


string decimalToBinary(int num){
   int remainder;
   string bin_reverse = "";
   while(num>0){
      remainder = num % 2;
      num /= 2;
      bin_reverse += to_string(remainder);
   }
   string binary = "";
   for(int i = bin_reverse.length()-1; i >= 0;i--){
      binary += bin_reverse[i];
   }
   return binary;
}

int main(){
   int n;
   cout<<"Enter the number in decimal format: ";
   cin>>n;
   cout<<decimalToBinary(n)<<endl;
   return 0;
}