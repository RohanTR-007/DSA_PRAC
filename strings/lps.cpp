#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pat;
    cin>>pat;
    vector<int> pre(pat.size());
    pre[0] = 0;
    int i = 0, j = 1;
    for (; j < pat.length(); ++j)
    {
        if (pat[i] == pat[j])
        {
            pre[j] = i + 1;
            i++;
        }
        else
        {
            i = 0;
            if (pat[i] == pat[j])
            {
                pre[j] = i + 1;
                i++;
            }
        }
    }
    for(auto i:pre)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}