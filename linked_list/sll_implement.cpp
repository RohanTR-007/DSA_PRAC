#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
    }
};
int main()
{
    Node* n1 = new Node(9);
    Node* n2 = new Node(10);
    Node* n3 = new Node(7);
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    Node * p=n1;
    while(p != NULL)
    {
        cout<<p->data;
        p=p->next;
    }
    return 0;
}