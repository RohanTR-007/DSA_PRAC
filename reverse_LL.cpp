#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
};

class rev
{
    public:
    Node* reverse(Node* list)
    {
        Node* p1=new Node();
        Node* p2=new Node();
        Node* p3=new Node();
        p1=list;
        p2=p1->next;
        p1->next=nullptr;
        while(p2 != nullptr)
        {
            p3=p2->next;
            p2->next=p1;
            p1=p2;
            p2=p3;
        }
        return p1;
    }
};
int main()
{
    Node* head = new Node();
    head->next=nullptr;
    head->val=0;
    Node* p = head;
    for(int i =1;i<5;++i)
    {
        Node *tmp=new Node();
        tmp->val=i;
        p->next=tmp;
        p=p->next;
    }
    // p=head;
    
    rev rev1;
    p=rev1.reverse(head);
    while(p)
    {
        cout<<p->val<<" ";
        p=p->next;
    }
    return 0;
}