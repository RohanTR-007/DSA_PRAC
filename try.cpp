#include<bits/stdc++.h>
using namespace std;
vector<long long> sub_sum(vector<long long>arr)
{
    long long mod=1000000007;
    int n=arr.size();
    long long sum=0,fsum=0;
    vector<long long>res;
    for(int k=1;k<=n;++k)
    {
        int i=0,j=0;
        while (j<n)
        {
            // sum+=arr[j];
            sum=sum%mod;
            // arr[j]=arr[j]%mod;
            sum=(sum+arr[j])%mod;
            if(j-i+1 == k)
            {
                // fsum+=sum;
                fsum=fsum%mod;
                sum=sum%mod;
                fsum=(fsum+sum)%mod;
                // arr[i]=arr[i]%mod;
                sum=(sum-arr[i])%mod;
                i++;
            }
            j++;
        }
        sum=0;
        res.push_back(fsum);
        fsum=0;
    }
    return res;
}
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        for(auto i:sub_sum(arr))    
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}