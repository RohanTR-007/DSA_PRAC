//Search in row wise and column wise sorted array

#include<bits/stdc++.h>
using namespace std;
pair<int,int> bs(vector<vector<int>> arr,int k)
{
    int c=arr[0].size();
    int r=arr.size();
    pair<int,int>res;
    int x=-1;
    int i=c-1,j=0;
    while(i>=0 && j<r)
    {
        if(arr[j][i] == k)
        {
            res={j,i};
            return res;
        }
        else if(arr[j][i] > k)
        {
            --i;
        }
        else
        {
            ++j;
        }
    }
    res={-1,-1};
    return res;
}
int main()
{
    vector<vector<int>> arr= 
                    { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
    int k=0;
    pair<int,int>res=bs(arr,k);
    cout<<res.first<<" "<<res.second<<endl;
    return 0;
}