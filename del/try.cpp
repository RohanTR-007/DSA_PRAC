#include<bits/stdc++.h>
using namespace std;
string solve(string s)
{
    map<char,int>mp;
    for(int i=0;i<s.size();++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            string t="";
            for(int j=i+1;j<s.size() ;++j)
            {
                if(s[j]>='0' && s[j] <= '9')
                {
                t+=s[j];
                }
                else{
                    break;
                }
            }
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = stoi(t);
            }
            else{
                mp[s[i]]+=stoi(t);
            }
            
        }
    }
    string res="";
    for(auto i:mp)
    {
        res+=i.first;
        res+=to_string(i.second);
    }
    return res;
}

int sol(int n,int arr[])
{
    int rec,has=1;
    while(n--)
    {
        rec=arr[has-1];
        has=rec;
    }
    return rec;
}
int main()
{
    // string s  = "a22222";
    // cout<<solve(s)<<endl;
    int arr[] = {2,4,1,5,3};
    cout<<sol(6,arr)<<endl;
    return 0;
}