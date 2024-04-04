#include <iostream> 

using namespace std ;

class Node{
     public:
     int data;
     Node *next;

     Node(){
        this ->data =0;
        this -> next= NULL;
     }
     // if data is provided
     Node(int data){
        this -> data = data;
        this -> next= NULL;
     }
};
// insert at head
void insertAtHead(int data , Node*&head, Node*&tail){
    // if head is null then the ll is empty
    if( head==NULL){
        Node* newNode = new Node(data);
        head = tail = newNode;
    }
    else{
        Node* newNode= new Node(data);
        newNode->next=head;
        head=newNode;
    }
}
// print node
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<" "<< temp->data;
        temp = temp->next;
    }
    cout <<endl;
}
// insert at tail
void insertAtTail(int data , Node*&head, Node*&tail){
    if(head==NULL){
       Node * newNode= new Node(data);
       head=tail=newNode;
       return;
    }else{
        Node * newNode= new Node(data);
        tail->next=newNode;
        tail=newNode;
    }
}
int findLength(Node * &head){
    int len=0;
    Node *temp= head;
    while (temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
    
}
// insert at position
    void insertAtPosition(int data, int position , Node* &head, Node* &tail){
        if(head==NULL){
            Node * newNode= new Node(data);
            head=tail=newNode;
            return;
        }
        // find the position and prev and curr
        if(position ==0 ){
            insertAtHead(data , head , tail );
            return ;
        }
        int len= findLength(head);

        if(position >=len){
            insertAtTail(data,head,tail);
            return;
        }
        // finding prev and curr
        int i=1;
        Node* prev= head;
        while (i<position){
            prev= prev->next;
            i++;
        }
        Node *curr= prev->next;
        
        Node *newNode = new Node(data);
        prev->next=newNode;
        newNode->next=curr;
    }
// delete the node
void deleteNode(int position ,Node *head, Node* tail){
    if(head == NULL){
        cout << "Cannot delete LL is empty";
        return;
    }
    // deleting first node
    if(position==1){
        Node* temp= head;
        head= head->next;
        temp->next == NULL;
        delete temp;
        return;
    }
    int len = findLength(head);

    // deleting last node;

    if(position ==len){
        // find prev
        int i=1;
        Node * prev= head;
        while (i<position-1){
            prev= prev->next;
            i++;
        }
        prev->next=NULL;
        Node *temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    // deleting middle node
    int i=1;
    Node *prev =head;
    while (i<position)
    {
        prev=prev->next;
        i++;
    }
    Node* curr = prev->next;

    prev -> next=curr->next;
    curr -> next = NULL ;
    delete curr;
    
}
int main(){
    Node* head=NULL;
    Node* tail = NULL;
    insertAtHead(15, head,tail);
    insertAtHead(20, head,tail);
    insertAtHead(25, head,tail);
    insertAtHead(30, head,tail);
    insertAtHead(35, head,tail);
    cout<<"After Head";
    printList(head);
    insertAtTail(99,head,tail);
        cout<<"After tail";
    printList(head);
    cout<<endl;
    insertAtPosition(87,3,head,tail);
    cout<<"After Pos";
    printList(head);
    return 0;
}