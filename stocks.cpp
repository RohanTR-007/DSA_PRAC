#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m=v[v.size()-1];
    int p=0;
    for(int i=v.size()-2;i>=0;i--)
    {
        if(v[i]-m > 0)
        {
            p=max(p,v[i]-m);
        }
        m=min(m,v[i]);

    }
    cout<<p<<endl;
    return 0;
}