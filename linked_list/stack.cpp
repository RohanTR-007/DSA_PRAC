// /****************************************************************

//     Following is the class structure of the Node class:
#include<bits/stdc++.h>
using namespace std;

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


// *****************************************************************/

class Stacko
{
    // Write your code here

public:
    Node *head = new Node;
    Node *top1;
    Node *top2;
    Node *prev1;
    Node *prev2;
    int len = 0;
    Stacko()
    {
        top1 = head;
        prev1 = head;
        top2 = head;
        prev2 = head;

        // Write your code here
    }

    int getSize()
    {

        return len;
        // Write your code here
    }

    bool isEmpty()
    {
        if (head->next == NULL)
            return 1;
        return 0;
        // Write your code here
    }

    void push(int data)
    {
        // cout << "oo - ";
        Node *tmp = new Node(data);
        prev2 = prev1;

        top2 = top1;
        top1->next = tmp;
        prev1 = top1;
        top1 = tmp;
        len++;

        // Write your code here
    }

    void pop()
    {
        if (top1 != head)
        {
            delete prev1->next;
            prev1->next = NULL;
            top1 = top2;
            prev1 = prev2;
            len--;
        }

        // Write your code here
    }

    int getTop()
    {
        if (len == 0)
        {
            cout<<"empty"<<endl;
            return -1;
        }
        // cout<<top1->data<<endl;
        return top1->data;
        // Write your code here
    }
};

int main()
{
    Stacko s;
    s.push(89);
    s.pop();
    s.pop();
    cout<<s.getTop()<<" io"<<endl;
    cout<<s.isEmpty()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    s.pop();
    cout << s.getTop() << endl;

    return 0;
}