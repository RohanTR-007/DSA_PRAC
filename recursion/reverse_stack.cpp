#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&s,int tmp)
{
    if(s.size() == 0)
    {
        s.push(tmp);
        return;
    }
    int x=s.top();
    s.pop();
    insert(s,tmp);
    s.push(x);
}

void rev_stack(stack<int>&s)
{
    if(s.size() == 0)
    {
        return;
    }
    int tmp=s.top();
    s.pop();
    rev_stack(s);
    insert(s,tmp);
}


int main()
{
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(1);
    s.push(3);
    s.push(7);
    s.push(4);
    s.push(1);
    s.push(0);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout<<"-------------------  After Reversing  --------------------"<<endl;
    s.push(2);
    s.push(5);
    s.push(1);
    s.push(3);
    s.push(7);
    s.push(4);
    s.push(1);
    s.push(0);

    rev_stack(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}