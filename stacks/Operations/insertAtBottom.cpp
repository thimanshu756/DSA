#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement= s.top();
    s.pop();

    // reccursion call
    insertAtBottom(s,target);
    // backtracing
    s.push(topElement);
}

int main(){


    stack<int> s;
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    insertAtBottom(s,50);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}