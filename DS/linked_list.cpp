#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int value, Node *nextNode){
            data = value;
            next = nextNode;
        }
};

class LinkedList{
    public:
        Node *head;
        LinkedList(){
            head = nullptr;
        }
        void addNode(int val){
            Node *newNode = new Node(val, nullptr);
            if(head==nullptr){
                head = newNode;               
            }
            else{
                Node *lastNode = head;
                while(lastNode->next!=nullptr){
                    lastNode = lastNode->next;
                }
                lastNode->next = newNode;
            }
        }
        void showList(){
            Node *currentNode = head;                        
            while(currentNode != nullptr){
                cout<<currentNode->data<<"->";
                currentNode=currentNode->next;
            }             
            cout<<endl;
        }
};


int main(){
    LinkedList newList;
    newList.addNode(12);
    newList.addNode(5);
    newList.addNode(15);
    newList.showList();
    return 0;
}

