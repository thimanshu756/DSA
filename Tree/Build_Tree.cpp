#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node *right;
    Node(int data){
        this->data= data;
        left=NULL;
        right=NULL;
    }
};

Node* build_tree(){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    // step A
    Node* root= new Node(data);

    cout <<"Enter the data for the left part of "<<data<<" node"<<endl;
    root->left= build_tree();

    cout <<"Enter the data for the right part of "<<data<<" node"<<endl;
    root->right= build_tree();

    return root;

}



int main(){


  Node* tree=  build_tree();

    return 0;
}