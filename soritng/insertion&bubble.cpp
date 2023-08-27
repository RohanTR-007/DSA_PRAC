#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=1;i<n;++i)
    {
        int key = arr[i];
        int j=i-1;
        while(arr[j] > key && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void buuble_sort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<endl;
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
    // insertion_sort(v);
    buuble_sort(v);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}