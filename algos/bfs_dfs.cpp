#include<bits/stdc++.h>
using namespace std;

class dfs
{
    public:
    map<int,bool>vis;
    map<int,list<int>>adj_lis;
    void insert(int s,int d)
    {
        adj_lis[s].push_back(d);
        vis[s]=0;
    }
    void pri()
    {
        for(auto l:adj_lis)
        {
            for(auto j:l.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    void dfs_traversal(int s)
    {
        cout<<s<<" -> ";
        vis[s]=1;
        for(auto i:adj_lis[s])
        {
            if(vis[i] == 0)
            {
                dfs_traversal(i);
            }
        }
    }

};


int main()
{
    dfs d1;
    d1.insert(1, 2);
    d1.insert(1, 3);
    d1.insert(1, 4);
    d1.insert(2, 6);
    d1.insert(3, 4);
    d1.insert(4, 6);
    d1.insert(4, 5);
    d1.insert(6,2);
    d1.insert(2, 1);
    d1.insert(4, 1);
    d1.insert(3, 1);
    d1.insert(5, 4);
    d1.insert(5, 7);
    d1.insert(4, 3);
    d1.insert(6, 4);
    d1.insert(7, 5);

    d1.pri();
    d1.dfs_traversal(1);
    return 0;
}