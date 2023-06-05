#include<bits/stdc++.h>
using namespace std;
int count_subarray_xor(int arr[],int k,int n)
{
    unordered_map<int,int>mp;
    int curxor=0,x2,count=0;
    for(int i=0;i<n;++i)
    {
        curxor^=arr[i];
        if(curxor == k)
        {
            ++count;
        }
        count+=mp[curxor^k];
        mp[curxor]++;
    }
    return count;

}
int main()
{
    int arr[]={4,2,2,6,4};
    int k=6,n=5;
    cout<<count_subarray_xor(arr,k,n);
    return 0;
}