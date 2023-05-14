#include<iostream>
#include<math.h>
using namespace std;

bool pythagorianTriplet(int one, int two, int three){
   int max_num = max(one, max(two,three));
   if(max_num == one){
      if(pow(one,2) == pow(two,2) + pow(three,2)){
         return true;
      }
      else{
         return false;
      }
   }
   else if(max_num == two){
      if(pow(two,2) == pow(one,2) + pow(three,2)){
         return true;
      }
      else{
         return false;
      }
   }
   else{
      if(pow(three,2) == pow(one,2) + pow(two,2)){
         return true;
      }
      else{
         return false;
      }
   }

}

int main(){
   int a,b,c;
   cout<<"Enter three numbers"<<endl;
   cin>>a>>b>>c;
   if(pythagorianTriplet(a,b,c)){
      cout<<"Triplet is true"<<endl;
   }
   else{
      cout<<"Triplet is false"<<endl;
   }

   return 0;
}