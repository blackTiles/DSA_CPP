#include<bits/stdc++.h>
#include<vector>
using namespace std;

class DQueue{
    private:
        vector<int> dq;
    public:
        void push_front(int data){
            dq.insert(dq.begin(), data);
        }
        void pop_front(){
            dq.erase(dq.begin());
        }
        void push_rear(int data){
            dq.insert(dq.end(),data);
        } 
        void pop_rear(){
            dq.pop_back();
        }
        void display(){
            for(auto i:dq){
                cout<<i<<" ";
            }
            cout<<endl;
        }
};

int main(){
    DQueue dq1;
    dq1.push_front(14);
    dq1.push_front(13);
    dq1.push_front(12);
    dq1.display();
    dq1.pop_front();
    dq1.push_rear(15);
    dq1.pop_rear();
    dq1.display();
    return 0;
}