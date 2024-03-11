#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(1);
    pq.push(6);
    pq.push(95);
    pq.push(56);

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

    cout<<endl;
    return 0;
}