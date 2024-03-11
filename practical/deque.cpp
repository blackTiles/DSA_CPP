#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int value): data(value), prev(nullptr), next(nullptr){}
};

class DQlinkedlist{
    private:
        Node *head;
    public:
        DQlinkedlist(): head(nullptr) {}

        bool isEmpty(){
            return head==nullptr; 
        }

        int size(){
            int s=0;
            Node *temp = head;
            if(!isEmpty() && head->next==nullptr){
                return 1;
            }else{
                s=1;
                while(temp->next != nullptr){
                    temp = temp->next;
                    s++;
                }
            }
            return s;
        }

        void push_front(int value){
            Node *newNode = new Node(value);
            if(isEmpty()){
                head=newNode;
            }else{
                newNode->next=head;
                head->prev=newNode;
                head = newNode;
            }
        }

        void pop_front(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }else if(size() == 1){
                delete head;
                head = nullptr;
            }else{
                Node *temp = head;
                head=head->next;
                head->prev=nullptr;
                delete temp;
            }
        }

        void push_rear(int value){
            Node *newNode = new Node(value);
            if(isEmpty()){
                head = newNode;
            }else{
                Node *temp = head;
                while(temp->next != nullptr){
                    temp=temp->next;
                }
                temp->next= newNode;
                newNode->prev = temp;
            }
        }

        void pop_rear(){
            if(isEmpty()){
                cout<<"List is empty"<<endl;
            }else{
                Node *temp=head;
                while(true){
                    if(temp->next == nullptr){
                        temp->prev->next=nullptr;
                        delete temp;
                        break;
                    }else{
                        temp = temp->next;
                    }
                }
            }
        }

        void display(){
            if(!isEmpty()){
                Node *temp=head;
                while(temp != nullptr){
                    cout<<temp->data<<", ";
                    temp = temp->next;
                }
                cout<<endl;
            }else{
                cout<<"List is empty"<<endl;
            }
        }
};

int main(){
    DQlinkedlist dl;
    // cout<<dl.isEmpty()<<endl;
    dl.push_front(12);
    dl.push_front(34);
    dl.push_front(19);
    dl.display();
    // dl.pop_front();
    // dl.display();
    dl.push_rear(99);
    dl.push_rear(100);
    dl.push_rear(110);
    dl.pop_rear();
    dl.push_front(1);
    dl.display();
    // cout<<dl.size()<<endl;
    return 0;
}