#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
    this->data= data;
    this->next= NULL;    
    }
};

void printLL(Node* &head){

    Node* temp=head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
Node* reverseKNode(Node* &head, int k){
    Node* prev= NULL;
    Node* curr= head;
    Node* forward= head->next;
    int count=0;
    while(count<k){
        forward= curr->next;
        curr->next= prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        Node* reccursionAnswer= reverseKNode(forward,k);
        head->next= reccursionAnswer;
    }
    return prev;
}

int main(){
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* seventh = new Node(70);
  Node* eighth = new Node(80);
  Node* ninth = new Node(90);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = ninth;
  ninth -> next = NULL;

printLL(head);

    Node* reversedAns= reverseKNode(head,3);
    printLL(reversedAns);

    return 0;
}