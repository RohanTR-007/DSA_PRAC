#include<bits/stdc++.h>
using namespace std;
string strco(string s,int n,vector<char> arr)
{
    int l=0;
    n=s.size();
    string tmp="";
    for(int i=0;i<s.size();++i)
    {
        if(find(arr.begin(),arr.end(),s[i]) != arr.end())
        {
            l=i;
        }
    }
    for(int i=0;i<l;++i)
    {
        if (find(arr.begin(), arr.end(), s[i]) == arr.end())
        {
            tmp+=(s[i]);
        }
    }
    cout<<l<<endl;
    int j=l+1;
    cout << tmp << endl;
    while(tmp.size() < n-j)
    {
        tmp+=s[j];
        j++;
    }
    // cout<<
    if(tmp.size() == n-j)
    {
        cout<<s.substr(j,n-j+1)<<endl;
        cout<<tmp<<endl;
        if(tmp == s.substr(j,n-j+1))
            return s.substr(0,n-(n-j)+1);
    }
    return "-1";
}
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<char> arr(n);
    // cout<<s.substr(n-2,2)<<endl;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<strco(s,n,arr);
    return 0;
}