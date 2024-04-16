#include <iostream>

using namespace std;
class Queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int data){
        this->size=data;
        arr= new int[size];
        front=0;
        rear=0;
    }
    // push operation
    void push(int data){
        if(rear==size){
            cout<< "Queue is full"<<endl;
            return;
        }else{
            arr[rear]=data;
            rear++;
        }
    }
    // pop operation
    void pop(){
        if(front==rear){
            cout<<"Q is empty "<<endl;
            return;
        }else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    // get front operation
    int get_Front(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
            return -1;
        }else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }else{
            return false;
        }
    }
    int getSize(){
        return rear-front;
    }
};




int main(){

 Queue q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<q.get_Front()<<endl;
    q.pop();
    cout<<q.get_Front()<<endl;
   cout<<q.getSize()<<endl;
   cout<<q.isEmpty()<<endl;
    return 0;
}