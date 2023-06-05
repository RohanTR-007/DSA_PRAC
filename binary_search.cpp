#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int ser,int n)
{
    int l=0,h=n,mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(arr[mid] == ser)
        {
            return mid;
        }
        else if(arr[mid] < ser)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,4,5,6,7,8};
    cout<<binary_search(arr,6,sizeof(arr)/sizeof(int))<<endl;
    return 0;
}