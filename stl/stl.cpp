#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> m1,pair<int,int> m2)
    {
        cout<<m1.second<<"-"<<m2.second<<endl;
        if(m2.second < m1.second)
        {
            
            return true;
        }
        // cout<<"f"<<endl;
        return false;
    }
int main()
{
    int arr[]={2,3,4,4,5,9,13};
    int n=sizeof(arr)/sizeof(int);
    bool res = binary_search(arr,arr+n,3);
    // cout<<res<<endl;
    // cout<<lower_bound(arr,arr+n,2)-arr<<endl; //first occurance index
    // cout<<lower_bound(arr,arr+n,13)-arr<<endl;
    // cout<<lower_bound(arr,arr+n,6)-arr<<endl;
    // cout<<lower_bound(arr,arr+n,14)-arr<<endl;// if not present returns last index +1
    // cout<<lower_bound(arr,arr+n,15)-arr<<endl;// if not present returns last index +1

    // cout<<upper_bound(arr,arr+n,1)-arr<<endl; //Number index + 1 
    // cout<<upper_bound(arr,arr+n,3)-arr<<endl; 
    // cout<<upper_bound(arr,arr+n,6)-arr<<endl; //last occurance index + 1
    // cout<<upper_bound(arr,arr+n,13)-arr<<endl;
    // cout<<upper_bound(arr,arr+n,14)-arr<<endl;
    // cout<<upper_bound(arr,arr+n,15)-arr<<endl;

    // cout<<"Hello World";
    unordered_map<int,int>mp;
    mp[1]=2;
    mp.insert({2,3});
    // auto it=mp.find(2);
    mp.insert({4,4});
    mp.insert({10,110});
    mp.insert({5,320});
    // cout<<(it)->second;
    
    auto it=mp.begin();
    vector<pair<int,int>>vp;
    for(auto i:mp)
    {
        vp.push_back(i);
        // cout<<i.first<<": "<<i.second<<endl;
    }
    sort(vp.begin(),vp.end(),cmp);
    // for(auto i:vp)
    // {
    //     // vp.push_back(i);
    //     cout<<i.first<<": "<<i.second<<endl;
    // }
    
    cout<<__builtin_popcount(7)<<endl;
    cout<<__builtin_popcountll(123456789111)<<endl;
    
    return 0;
}