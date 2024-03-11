#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack{
   private:
      T *arr = nullptr;
      int size;
      int top=-1;
   public:
      Stack(int s):size(s){
         arr = new T[s];
      }
      bool isFull(){
         return top==(size-1);
      }
      bool isEmpty(){
         return top==-1;
      }
      void peek(){
         cout<<"Peek value is : "<<arr[top]<<endl;
      }
      void push(T value){
         if(isFull()){
            cout<<"Stack Overflow"<<endl;
         }else{
            top++;
            arr[top]=value;
         }
      }
      void pop(){
         if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
         }else{
            top--;
         }
      }
      void display(){
         if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
         }else{
            cout<<endl;
            for(int i=top; i>=0; i--){
               cout<<"| "<<arr[i]<<" |"<<endl<<"------"<<endl;
            }
         }
      }
};

int main(){
   Stack<int> st(5);
   st.push(10);
   st.push(11);
   st.push(12);
   st.push(13);
   st.push(14);
   st.display();
   st.pop();
   st.display();
   st.peek();
   return 0;
}
