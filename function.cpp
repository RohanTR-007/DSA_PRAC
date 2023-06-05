#include<bits/stdc++.h>
using namespace std;

int bisearch(vector<int> &arr,int low,int high,int key)
{
    int mid=(low+high)/2;
    
    if(arr[mid] == key)
    {
        cout<<"mid"<<mid<<endl;
        return mid;
    }
    else if(key>arr[mid])
    {
        return bisearch(arr,mid+1,high,key);
    }
    else
    {
        return bisearch(arr,low,mid-1,key);
    }
    return -1;
}




void sot(vector <int> &a)
{
    sort(a.begin(),a.end());
}
int main()
{

    vector<int> a={1,7,0,4,3};
    sot(a);
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    int v=bisearch(a,0,5,78);
    cout<<v;
    return 0;
}