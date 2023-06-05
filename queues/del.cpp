// Online C++ compiler to run C++ program online

#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    unordered_map<int,int>u_mp;
    int arr[]={2,454,54,26,355,24,435,0,90,7};
    map<int,int>mp;
    for(int i =0;i<sizeof(arr)/sizeof(int);++i)
    {
        u_mp[arr[i]]=i;
        mp[arr[i]]=i;
    }
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"----------"<<endl;
    for(auto i:u_mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
