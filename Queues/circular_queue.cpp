#include <iostream>

using namespace std;

class CirQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    CirQueue(int data)
    {
        size = data;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    // push operation
    void push(int data)
    {
        if ((front == 0 && rear == size - 1) && (rear == front - 1))
        {
            cout << "Q is full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    // pop operation
    void pop()
    {
        // check if q is empty or not
        if (front == -1)
        {
            cout << "Q is empty" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    // get front operation

    int get_Front()
    {
        if (front == -1 )
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if ((front == -1 )) // look here 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    CirQueue q(3);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(7);
    q.pop();
    while (!q.isEmpty()){
        cout<<q.get_Front()<<endl;
        q.pop();
    }
    {
        /* code */
    }
    

}