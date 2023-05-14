#include<iostream>
using namespace std;

int factorial(int num){
   int factor = 1;
   if(num == 0 || num == 1){
      return factor;
   }
   else{
        for(int i = 1; i <= num;i++){
        factor *= i;
      }
   }
   return factor;
}

int main(){
   int n, n_r, r;

   cout<<"Enter n: ";
   cin>>n;
   cout<<"Enter r: ";
   cin>>r;
   
   n_r = n-r;

   int n_C_r = factorial(n)/(factorial(r) * factorial(n_r));
   cout<<"The value of nCr is : "<<n_C_r<<endl;

   return 0;
}