#include<bits/stdc++.h>
using namespace std;
int pick_max_toys(string toys,int k)
{
    unordered_map<char,int>mp;
    int i=0,j=0,m=0;
    while(j<toys.length())
    {
        mp[toys[j]]=j;
        if(mp.size()<k)
        {
            ++j;
        }
        else if(mp.size() == k)
        {
            m=max(m,j-i+1);
            ++j;
        }
        else if(mp.size() > k)
        {
            int cnt=1,p=j-1;
            char pre=toys[j],prev;
            while(cnt <= k)
            {
                if(toys[p] != pre)
                {
                    ++cnt;
                    prev=pre;
                    pre=toys[p];
                }
                --p;
            }
            i=++p;
            i++;
            mp.erase(pre);
            m=max(m,j-i+1);
            ++j;
        }
    }
    if(mp.size() == 1)
    {
        return toys.length();
    }
    return m;
}
int main()
{
    string toys="ahjdkjsaaabbbccdd";
    int k=2;
    cout<<pick_max_toys(toys,k)<<endl;
    return 0;
}