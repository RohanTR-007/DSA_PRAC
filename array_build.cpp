#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int check(vector<int>& target,vector<int>& stream)
    {
        if(target.size() != stream.size())
        {
            return 0;
        }
        else if(target.size() == stream.size())
        {
            for(int i =0;i<target.size();++i)
            {
                if(target[i] != stream[i])
                    return 0;
            }
            return 1;
        }
        return -1;
    }
    void print(vector<int>& stream)
    {
        for(int i =0;i<stream.size();++i)
            {
                cout<<stream[i]<<" ";
            }
            cout<<endl;
    }
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int> stream;
        vector<string> res;
        int j=0;
            for(int i =1;i<=n;++i)
            {   
                stream.push_back(i);
                res.push_back("Push");
                // cout<<"push"<<endl;
                // print(stream);
                if(check(target,stream) == 1)
                {
                    break;
                }
                
                if(target[j] != i && (stream.size() > 0))
                {
                    stream.pop_back();
                    res.push_back("Pop");
                    // cout<<"pop"<<endl;
                    // print(stream);
                    
                }
                if(target[j] == i)
                {
                       j++;
                }

            }
            return res;
    }
};

int main()
{
    int size,n,x;
    cin>>size>>n;
    vector<int> target;
    vector<string> itr;
    for(int i =0;i<size;++i)
    {
        cin>>x;
        target.push_back(x);
    }
    Solution s1;
    itr=s1.buildArray(target,n);
    for(int j =0;j<itr.size();++j)
    {
        cout<<itr[j]<<" ";
    }
    return 0;
}
