#include<bits/stdc++.h>
using namespace std;

int find_max_sum_sub_array(int arr[],int n,int s) // s = window size or Subset size
{
    int sum=0;
    int max;
    for(int i =0;i<s;++i)
    {
        sum+=arr[i];
    }
    max=sum;
    for(int i=s,j=0;i<n && j<=n-s;++i,j++)
    {
        sum=sum-arr[j]+arr[i];
        if(sum > max)
        {
            max = sum;
        }
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cout<<find_max_sum_sub_array(a,n,3);
    return 0;
}