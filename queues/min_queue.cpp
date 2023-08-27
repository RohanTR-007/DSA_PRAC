#include<bits/stdc++.h>
using namespace std;

class min_queu
{
    public:
    deque<int>dq;
    queue<int>q;
    void enque(int x)
    {
        if(q.empty())
        {
            dq.push_back(x);
            q.push(x);
        }
        else
        {
            q.push(x);
            while(!dq.empty() && dq.back() >= x)
            {
                dq.pop_back();
            }
            dq.push_back(x);
        }
    }
    int deque()
    {
        int t = q.front();
        if(q.front() == dq.front())
        {
            dq.pop_front();
            q.pop();
        }
        else
        {
            q.pop();
        }
        return t;
    }
    int min_ele()
    {
        return dq.empty()? -1: dq.front();
        // return dq.front();
    }
};

int main()
{
    min_queu Q;
    Q.enque(2);
    Q.enque(1);
    Q.enque(4);
    cout<<Q.min_ele()<<endl;
    cout << "Popped :"<<Q.deque() << endl;
    cout << "Popped :" << Q.deque() << endl;
    cout << Q.min_ele() << endl;
    cout << "Popped :" << Q.deque() << endl;
    cout << Q.min_ele() << endl;

    return 0;
}