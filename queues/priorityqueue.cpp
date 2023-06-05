#include<bits/stdc++.h>
using namespace std;
void print_q(int que[],int n)
{
    for(int i =0;i<n-1;++i)
    {
        cout<<que[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={6,8,3,10,15,2,9,17,5};
    int n=sizeof(arr)/sizeof(int);
    int queue[n];
    for(int i =0;i<n;++i)
    {
        queue[i]=arr[i];
    }
    int prio=arr[0];
    int index=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < prio)
        {
            prio=arr[i];
            index=i;
        }
    }
    cout<<"prio ="<<prio<<index<<endl;

    for(int j = index;j<n;++j)
    {
        queue[j]=queue[j+1];
    }
    print_q(queue,n);
    
    return 0;
}