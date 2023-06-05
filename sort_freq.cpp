#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&x ,pair<int,int>&y )
{
    if(x.second > y.second)
    {
        return false;
    }
    else if(x.second == y.second)
    {
        if(x.first > y.first)
        {
            return false;
        }
        return true;
    }
    return true;
}
int main() {
    int n,t;
    vector<int>tmp;
    unordered_map<int,int>mp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        sort(mp.begin(),mp.end(),cmp);
        for(auto i:mp)
        {
            for(int j=0;j<i.second;++j)
            {
                // tmp.push_back(i.first);
                cout<<i.first<<" ";
            }
        }
        cout<<endl;
	   // return tmp;
    }
    return 0;
    
}