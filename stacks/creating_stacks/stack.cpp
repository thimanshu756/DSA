#include <iostream>
#include <stack>


using namespace std;

class Stack{
    private:
    int top;
    int *arr;
    int size;
    public:
    // functions
    // constructor
    Stack(int size){
        arr= new int[size];
        this->size=size;
        top=-1;
    }
    // push operation 
    void push(int data){
        // check if space is availaible or not
        if(size-top >1){
            //insert
            top++;
            arr[top]=data;
        }
        else{
            //space is not availaible
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top==-1){
            // stack is empty
            cout<<"stack underflow"<<endl;
        }else{
            //stack isnot empty
            top--;
        }
    }

    int getTop(){
        // check if stck is empty or not
        if(top==-1){
            cout<<"stack is empty baby"<<endl;
        }else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }

    // check if stack is empty or not
    bool isEmpty(){
        if(top ==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

// void printStack(Stack* s){
//     while (!s->isEmpty())
//     {
//         cout <<s->getTop()<<endl;
//         s->pop();
//     }
    
// }
int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while (!s.isEmpty()){
        cout <<s.getTop()<<endl;
        s.pop();
    }

    return 0;
}