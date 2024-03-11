#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++; // top = 0
      stack[top]=val; // stack[0] = 56
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=0; i<=top; i++)
      cout<<stack[i]<<", ";
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}
int main() {
    push(14);
    push(12);
    push(56);
    display();
    pop();
    display();
   return 0;
}