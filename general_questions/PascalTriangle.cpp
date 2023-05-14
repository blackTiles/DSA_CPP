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
   int row_col, n_C_r;
   cout<<"Enter the number of rows: ";
   cin>>row_col;
   
   for(int j=0; j<row_col; j++){
      for(int k=0; k<=j; k++){
         n_C_r = factorial(j)/(factorial(k) * factorial(j-k));
         cout<<n_C_r<<" ";
      }
      cout<<"\n";
   }

   return 0;
}