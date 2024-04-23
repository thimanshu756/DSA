#include <iostream>
#include<queue>
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

// level oder traversel;

void level_order_traversel(Node* root){
    queue<Node *> q;
    // initially
    q.push(root);
    // to go to next line
    q.push(NULL);

    while(!q.empty()){
        // step 1
        Node *temp=q.front();
        // 
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


int main(){


  Node* tree=  build_tree();
    level_order_traversel(tree);
    return 0;
}