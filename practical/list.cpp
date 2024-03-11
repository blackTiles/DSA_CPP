#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
    Node(int value):data(value), prev(nullptr), next(nullptr){}
};

class ListAdt{
    private:
        Node *head;
    public:
        ListAdt():head(nullptr){}

        void insert(int value){
            Node *newNode = new Node(value);
            if(head==nullptr){
                head=newNode;
            }else{
                Node *temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->prev = temp;
            }
        }

        void delete_node(){
            if(head==nullptr){
                cout<<"List is empty"<<endl;
            }else{
                Node *temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->prev->next = nullptr;
                delete temp;
            }
        }

        void search(int key){
            if(head==nullptr){
                cout<<"List is empty"<<endl;
            }else{
                Node *temp = head;
                int index = 1;
                while(temp != nullptr){
                    if(temp->data == key){
                        cout<<"Element found at node : "<<index<<endl;
                        break;
                    }
                    temp = temp->next;
                    index++;
                }
            }
        }

        void count(){
            if(head==nullptr){
                cout<<"Count : 0"<<endl;
            }else{
                Node *temp = head;
                int size = 1;
                while(temp != nullptr){
                    temp = temp->next;
                    size++;
                }
                cout<<"Count : "<<size<<endl;
            }
        }

        void display(){
            if(head==nullptr){
                cout<<"Empty list"<<endl;
            }else{
                Node *temp = head;
                while(temp != nullptr){
                    cout<<temp->data<<"->";
                    temp = temp->next;
                }
                cout<<endl;
            }
        }
};

int main(){
    ListAdt list;
    list.insert(12);
    list.insert(15);
    list.insert(17);
    list.insert(18);
    list.insert(19);
    list.count();
    list.display();
    list.delete_node();
    list.display();
    list.search(17);
    return 0;
}