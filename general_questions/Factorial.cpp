#include<iostream>
using namespace std;

int factor = 1;

int factorial(int num){
   if(num > 1){
      factor *= num;
      return factorial(num-1);
   }
   else{
      return factor;
   }
}

int main(){
   int n;
   cout<<"Enter number: ";
   cin>>n;
   cout<<"Factorial of "<<n<<" is : "<<factorial(n)<<endl;
   return 0;
}