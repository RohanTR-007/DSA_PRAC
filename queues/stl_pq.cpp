#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(23);
    pq.push(1);
    pq.push(4);
    pq.push(90);
    pq.push(0);
    pq.push(-1);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    priority_queue <int, vector<int>, greater<int>> minpq;
    minpq.push(23);
    minpq.push(1);
    minpq.push(4);
    minpq.push(90);
    minpq.push(0);
    minpq.push(-1);
    while(!minpq.empty())
    {
        cout<<minpq.top()<<" ";
        minpq.pop();
    }
    return 0;
}