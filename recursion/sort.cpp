#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&v,int tmp)
{
    if(v.size() == 0 || v[v.size()-1] <= tmp)
    {
        v.push_back(tmp);
        return;
    }
    int x= v[v.size()-1];
    v.pop_back();
    insert(v,tmp);
    v.push_back(x);
}
void sort_recur(vector<int>&v)
{
    if(v.size() == 1)return;
    int tmp=v[v.size()-1];
    v.pop_back();
    sort_recur(v);
    insert(v,tmp);
}


int main()
{
    vector<int>v={5,1,3,4,81,4,3,0};
    sort_recur(v);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}