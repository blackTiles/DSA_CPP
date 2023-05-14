#include<iostream>
using namespace std;

void fibonacci(int range){
   int previous = 0, next = 1, current;
   cout<<previous<<endl<<next<<endl;
   for(int i = 1; i <= range-2; i++){
      current = previous + next;
      cout<<current<<endl;
      previous = next;
      next = current;
   }
}


int main(){
   int range;
   cout<<"Enter the range of numbers: ";
   cin>>range;
   if(range == 1){
      cout<<0<<endl;
   }
   else if(range == 2){
      cout<<0<<endl<<1<<endl;
   }
   else{
      fibonacci(range);
   }
   return 0;
}