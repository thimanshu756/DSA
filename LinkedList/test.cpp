#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

void printTree(Node* root){

    if(root==NULL){
        cout<<"There is no tree"<<endl;
        return;
    }
    printTree(root->left);

    cout <<root->data<<" ";

    printTree(root->right);
}

int main(){

   Node* root= new Node(1);
    Node* left = new Node(2);
    Node* right = new Node(3);
    Node* leftest = new Node(4);

   root->left=left;
   root->right=right;
   left->left=leftest;
   printTree(root);

    return 0;
}