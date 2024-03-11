#include<iostream>
#include<vector>
using namespace std;

class Queue{
    private:
        vector<int> q;
    public:
        void enque(int data){
            q.push_back(data);
        } 
        void deque(){
            q.erase(q.begin());
        }
        void showQueue(){
            for(auto i:q){
                cout<<i<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Queue q1;
    q1.enque(23);
    q1.enque(2);
    q1.enque(3);
    q1.enque(5);
    q1.showQueue();
    q1.deque();
    q1.showQueue();

    return 0;
}