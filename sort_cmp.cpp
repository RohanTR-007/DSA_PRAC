#include<bits/stdc++.h>
using namespace std;
// bool cmp(pair<int,int>&x,pair<int,int>&y)
// {
//     if(x.second < y.second)
//     {
//         return 0;
//     }
//     else if(x.second  == y.second)
//     {
//         if(x.first > x.second)
//         {
//             return 0;
//         }
//     }
//         return 1;
    
// }

void m(vector<pair<int,int>>&vp,int l,int m,int h)
{
    int p=l,q=m+1;
    vector<pair<int,int>>tmp;
    while(p<=m && q<=h)
    {
        if(vp[p].second < vp[q].second)
        {
            tmp.push_back({vp[q].first,vp[q].second});
            q++;
        }
        else if(vp[p].second > vp[q].second){
            tmp.push_back({vp[p].first,vp[p].second});
            p++;
        }
        else{
            if(vp[p].first < vp[q].first)
            {
                tmp.push_back({vp[p].first,vp[p].second});
                p++;
            }
            else{
                tmp.push_back({vp[q].first,vp[q].second});
                q++;
            }
        }
    }
    while(p<=m)
    {
        tmp.push_back({vp[p].first,vp[p].second});
        p++;
    }
    while(q<=h)
    {
        tmp.push_back({vp[q].first,vp[q].second});
        q++;
    }
    for(int i=l;i<=h;++i)
    {
        vp[i]=tmp[i-l];
    }
}





void ms(vector<pair<int,int>>&vp,int l,int h)
{
    if(l==h)return;
    int mid=l+(h-l)/2;
    ms(vp,l,mid);
    ms(vp,mid+1,h);
    m(vp,l,mid,h);

}





int main()
{
    vector<pair<int,int>> vp={{1,2},{4,7},{0,0},{0,3},{1,2},{1,90},{0,90},{23,0}};
    vector<pair<int,int>> vp1 = vp;
    ms(vp,0,7);
    // sort(vp.begin(),vp.end());
    // sort(vp1.begin(),vp1.end(),cmp);
    
    for(auto i:vp)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
    // cout<<"----------"<<endl;
    // for(auto i:vp1)
    // {
    //     cout<<i.first<<" : "<<i.second<<endl;
    // }
    return 0;
}