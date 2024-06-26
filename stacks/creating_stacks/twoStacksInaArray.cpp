#include <iostream>
#include <stack>

using namespace std;


class Stack{
    private:
    int top1;
    int top2;
    int *arr;
    int size;

    public:
    // functions
    // constructor
    Stack(int size){
        arr= new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }
    // push operation 
    void push1(int data){
       if(top2-top1){
        cout<<"overflow stack1"<<endl;
       }else{
        // space availaible
        top1++;
        arr[top1]=data;
       }
    }
    void pop1(){
       if(top1==-1){
        // stack is empty
        cout<<"stack is empty"<<endl;
       }else{
        // space availaible;
        arr[top1]=0;
        top1--;
       }
    }
    void push2(int data){
        if(top2-top1==1){
             cout<<"overflow stack2"<<endl;
        }else{
            // space is availaible
            top2--;
            arr[top2]=data;
        }
        
    }
    void pop2(){
        if(top2==size){
            cout<<"Nothing to pop "<<endl;
        }else{
            // it means data is there to remove
            arr[top2]=0;
            top2++;
        }
    }

    void print(){
        cout<<endl;
        cout<<"top1 :"<<top1<<endl;
        cout<<"top2 :"<<top2<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

};
    //



int main(){



     Stack s(10);

        s.push1(10);
        s.print();
        s.push1(20);
        s.print();
        s.push1(30);
        s.print();
        s.push1(40);
        s.print();
        s.push1(50);
        s.print();

        s.push2(100);
        s.print();
        s.push2(110);
        s.print();
        s.push2(120);
        s.print();
         s.push2(130);
        s.print();
        s.push2(140);
        s.print();


    return 0;
}