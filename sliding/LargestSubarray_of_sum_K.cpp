#include<bits/stdc++.h>
using namespace std;
//Using Sliding Window works only for +ve no's
int Largest_subarr(vector<int>A,int k)
{
    int sum=0,i=0,j=0;
    int m=0;
    while(j<A.size())
    {
        sum+=A[j];
        if(sum < k)
        {
            ++j;
        }
        else if(sum == k)
        {
            m=max(m,(j-i+1));
            ++j;
        }
        else
        {
            while(sum > k)
            {
                sum-=A[i];
                i++;
            }
            if(sum == k)
            {
                m=max(m,(j-i+1));
            }
            ++j;
        }
    }
    return m;
}
//Using Prefix-Sum works for both +ve and -ve
int prefix_sum(vector<int>A,int k)
{
    unordered_map<int,vector<int>>mp;
    int sum=0,m=0,ser;
    for(int i=0;i<A.size();++i)
    {
        sum+=A[i];
        if(sum == k)
        {
            m=max(m,i+1);
        }
        ser=sum-k;
        if(mp.size() > 0)
        {
            if(mp.find(ser) != mp.end())
            {
                // m=max(m,(i-mp[ser]+1));
                for(auto j:mp[ser])
                {
                    m=max(m,(i-j+1));
                }
            }
        }
        mp[sum].push_back(i);
    }
    
    return m;
}
int main()
{
    vector<int>A={-5,8,-14,2,4,12};
    int k=-5;
    cout<<Largest_subarr(A,k)<<endl;
    cout<<prefix_sum(A,k)<<endl;
    return 0;
}

// 7 5
// 4 1 1 1 2 3 5