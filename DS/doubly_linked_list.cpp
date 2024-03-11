#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *nextAddress;
        Node *prevAddress;
        Node(int data, Node *nextAddress=nullptr, Node *prevAddress=nullptr) 
            : data(data), nextAddress(nextAddress), prevAddress(prevAddress) {}
};

class DoublyLinkedList{
    public:
        Node *head;
        DoublyLinkedList() : head(nullptr) {}

        void addNode(int data){
            Node *newNode = new Node(data, nullptr, nullptr)
            if(head==nullptr){
                head = newNode;
            }
            else{
                
            }
        }
}

int main(){
    Node node(2);
    cout<<node.data<<node.nextAddress<<node.prevAddress<<endl;
    return 0;
}