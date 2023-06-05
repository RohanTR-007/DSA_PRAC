#include<bits/stdc++.h>
using namespace std;
void delete_middle_element_from_stack(stack<int>&s,int n)
{
    if(n%2 == 0)
    {
        if(s.size() == n/2)
        {
            s.pop();
            return;
        }
    }
    else if(n%2 == 1 && s.size() == (n/2 +1))
    {
        s.pop();
        return;
    }
    int tmp=s.top();
    s.pop();
    delete_middle_element_from_stack(s,n);
    s.push(tmp);
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
    delete_middle_element_from_stack(s,s.size());
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}