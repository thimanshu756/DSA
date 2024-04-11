#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *sortLL(Node *&head)
{
    if (!head || !head->next)
    {
        return head;
    }
    // create dummy nodes
    Node *zeroHead = new Node(-1001);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1001);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1001);
    Node *twoTail = twoHead;

    // transverse the original LL
    Node *curr = head;
    cout << "done1" << endl;

    while (curr != NULL)
    {
        // for zeros

        if (curr->data == 0)
        {
            // take out the zero wali node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            // aend the node in zerohead tail
            zeroTail->next = temp;
            zeroTail = temp;
        }
        // for ones
        else if (curr->data == 1)
        {
            // smae as above
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            oneTail->next = temp;
            oneTail = temp;
        }
        // for twos
        else if (curr->data == 2)
        {
            // smae as above
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // join them and remove the dummy nodes
    // ones list
    Node *temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;
    // now we can do the same
    Node *temp2 = twoHead;
    twoHead = twoHead->next;
    temp2->next = NULL;
    delete temp2;

    // join the list
    if (oneHead != NULL)
    {
        // zero wali list ko one wali list se attach kr do
        zeroTail->next = oneHead;
        if (twoHead != NULL)
        {
            oneTail->next = twoHead;
        }
        else
        {
            // means on head is emty
            if (twoHead != NULL)
            {
                zeroTail->next = twoHead;
            }
        }
    }
    // remove zerohead dummy node
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;
    return zeroHead;
}
int main(){
    Node *head = new Node(2);
    Node *second = new Node(2);
    Node *third = new Node(1);
    Node *fourth = new Node(1);
    Node *fifth = new Node(0);
    Node *sixth = new Node(0);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    cout << "input LL: ";
    print(head);
    head = sortLL(head);
    print(head);
    return 0;
}