#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(Node* &head){

    Node* temp=head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
};
Node* startingPoint(Node* &head){
    Node*slow=head;
    Node*fast=head;
    while (fast!=NULL){
        fast= fast->next;
        if(fast!= NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }

    }
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    
}


int  main() {


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
    Node*answer=startingPoint(head);
// cout<<answer;

    return 0;
}