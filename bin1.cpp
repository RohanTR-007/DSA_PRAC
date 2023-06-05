#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout<<"Hello World";
    vector<vector<int>>v;
    v.push_back({1,2});
    v.push_back({5,6});
    v.push_back({89});
    vector<int>m = v[0];
    m.push_back(45);
    for(auto i:v)
    {
        for(auto j:i)
        {
            cout<<j<<endl;
        }
    }
    cout<<endl;
    for(auto i:m)
    {
        cout<<i;    
    }
    
    

    return 0;
}
