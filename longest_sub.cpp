#include<bits/stdc++.h>
using namespace std;

string largest_sub_no(int n,int k,string s)
{
    int sum=0,xor_val=0,divi;
    int max=xor_val;
    int index=-1;
    string sub;
    // for(int i=0;i<n;i++)
    // {
    //     sum+=s[i]-48;

    // }
    for(int i =1;i<n;++i)
    {
        sub=s.substr(i,n-i);
        
        divi=sum-(s[i-1]-48);
        xor_val=(xor_val^(s[i-1]-48));
        if(divi%k == 0)
        {
            
            // cout<<"xor"<<xor_val<<endl;
            if(xor_val > max)
            {
                max=xor_val;
                index=i;
            }
            // cout<<"index"<<i<<endl;
        }
    }
    if(index == -1)
    {
        return "-1";
    }
    return s.substr(index,n-index);
}

int main()
{
    int size,k;
    string s,res;
    cin>>size>>k;
    cin>>s;
    res=largest_sub_no(size,k,s);
    cout<<res;
    return 0;
}