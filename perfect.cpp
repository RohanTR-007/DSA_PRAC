#include<bits/stdc++.h>
using namespace std;

int dist(string s,unordered_map<char,int>mp)
{
    int del=0;
    for(auto i:s)
    {
        if(mp.find(i) == mp.end())
        {
            del++;
        }
        else
        {
            mp[i]--;
        }
    }
    int le=del;
    for(auto i:mp)
    {
        le+=(i.second);
    }
    return le;
}
int main()
{
    int N;
    cin>>N;
    vector<string>v(N);
    for(int i=0;i<N;++i)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    unordered_map<char, int> mp;
    for(auto i : s)
    {
        mp[i]++;
    }
    string res=v[0];
    int prevlen = dist(res,mp);
    for(int i=0;i<N;++i)
    {
        int len=dist(v[i],mp);
        // cout<<len<<" ";
        if(len < prevlen)
        {
            res=v[i];
        }
        if(prevlen == len)
        {
            res=min(res,v[i]);
        }
    }
    // cout<<endl;
    cout<<res<<endl;
}