#include<iostream>
#include<stack>

using namespace std;

void findMiddle(stack<int> &s , int totalSize){
    if(s.size()==0){
        cout<<"there is no element in the stack"<<endl;
        return;
    }
    // base case
    if(s.size()==totalSize/2+1){
        cout<<"Middle element is :"<<s.top()<<endl;
        return;
    }
    int temp=s.top();
    s.pop();

    // recurrsive call;
    findMiddle(s,totalSize);
    /// back track
    s.push(temp);

}

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(39);
    s.push(35); 
    s.push(40); 

    int totalSize=s.size();
    findMiddle(s,totalSize);

    return 0;
}