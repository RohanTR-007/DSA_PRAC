#include<bits/stdc++.h>
using namespace std;

int partition(int l,int h,int p,vector<int> &arr)
{
    int i=l,j=h;
    while(i<j)
    {
        while(arr[i] <= arr[p])
        {
            i++;
        }
        while(arr[j] > arr[p])
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[p],arr[j]);
    return j;
}

void quick_sort(int l,int h,vector<int> &arr)
{
    if(l<h)
    {
        int j = partition(l,h,l,arr);
        quick_sort(l, j - 1, arr);
        quick_sort(j + 1, h, arr);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
    }
    quick_sort(0,n-1,v);
    for (int i = 0; i < n; ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}