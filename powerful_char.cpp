#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> x, pair<char, int> y)
{
    if(x.second < y.second)
    {
        return 0;
    }
    else if(x.second == y.second)
    {
        if(x.first > y.first)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    vector<pair<char,int>>v;
    for(auto i:mp)
    {
        v.push_back(make_pair(i.first,i.second));
    }
    sort(v.begin(),v.end(),cmp);
    string k="";
    for(auto i:v)
    {
        k+=i.first;
    }
    cout<<k<<endl;
    return 0;
}