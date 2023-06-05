#include<bits/stdc++.h>
using namespace std;
vector<deque<int>> subseq(vector<int>ar,int k)
{
    int N=ar.size();
    deque<int>q;
    vector<deque<int>>ans;
    for(int i=0;i<N;++i)
    {
        q.push_back(ar[i]);
        ans.push_back(q);
        q.pop_back();
    }
    for(int n=2;n<=N;++n)
    {
        for(int i=0;i<N-n+1;++i)
        {
            for(int p=i;p<i+n-1;++p)
            {
                q.push_back(ar[p]);
            }
            for(int j=i+n-1;j<N;++j)
            {
                q.push_back(ar[j]);
                ans.push_back(q);
                q.pop_back();
            }
            q.clear();
        }
    }
    return ans;
}

int main()
{
    vector<int>v={1,2,3,4,6};
    vector<deque<int>>q=subseq(v,v.size());
    cout<<"no of = "<<q.size()<<endl;
    for(auto it:q)
    {
        while(!it.empty())
        {
            cout<<it.front()<<" ";
            it.pop_front();
        }
        cout<<endl;
    }
    return 0;
}