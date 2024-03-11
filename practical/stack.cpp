#include<iostream>
#include<vector>
using namespace std;

class Stack{
    private:
        vector<int> stack;
    public:
        void push(int data){
            stack.push_back(data);
        }
        void pop(){
            stack.pop_back();
        }
        void showStack(){
            for(auto i:stack){
                cout<<i<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Stack stack1;
    stack1.push(20);
    stack1.push(5);
    stack1.push(4);
    stack1.push(6);
    stack1.showStack();
    stack1.pop();
    stack1.showStack();
    return 0;
}