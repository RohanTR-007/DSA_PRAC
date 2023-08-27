#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s="";
    vector<string>v;
    while(n > 0)
    {
        s+=char((n%10)+'0');
        n/=10;
    }
    reverse(s.begin(),s.end());
    string k = "";
    for(auto i:s)
    {
        k+=char((i-'1')+'a');
    }
    cout<<k<<endl;
    k="";
    int fl=0;
    for(int i=0;i<s.size()-1;++i)
    {
        for(int j=0;j<s.size();++j)
        {
            if(j == i && j<s.size()-1)
            {
                string t = "";
                t+=s[i];
                t+=s[j];
                int x = stoi(t);
                if(x <= 26)
                {
                    k+=char('a'+(x));
                }
                else
                {
                    fl=1;
                    break;
                }
                j++;
            }
            else
            {
                k+=char((s[j]-'1')+'a');
            }
        }
        if(fl != 1)
        {
            v.push_back(k);
        }
        k="";
        fl=0;
        sort(v.begin(),v.end());
        
    }
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}