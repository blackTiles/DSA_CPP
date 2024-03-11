#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};


void inorderTraversal(Node *node){
    if(node == nullptr){
        return;
    }
    inorderTraversal(node->left);
    cout<<node->data<<"->";
    inorderTraversal(node->right);
    // cout<<endl;
}

void preorderTraversal(Node *node){
    if(node == nullptr){
        return;
    }
    cout<<node->data<<"->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void postorderTraversal(Node *node){
    if(node == nullptr){
        return;
    }
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<node->data<<"->";
}

int main(){
    Node *root = new Node(5);
    root->left= new Node(10);
    root->right = new Node(15);
    root->left->left= new Node(20);
    root->left->right = new Node(30);
    inorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    return 0;
}

