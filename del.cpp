
#include<bits/stdc++.h> 
// 2 7 4   188
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>res;
        int tmp=0,i=num.size()-1,j;
        while(k>0 && i >=0)
        {
            tmp=k%10;
            j=i;
            while(num[j]+tmp >= 10)
            {
                int x=(num[j]+tmp)%10;
                cout<<"tmp"<<x<<endl;
                num[j]=x;
                tmp=(num[j]+tmp)/10;
                cout<<"tmp :"<<tmp<<"j :"<<j<<endl;
                j--;
            }
            num[j]=num[j]+tmp;
            // cout<<num[i]<<"= tmp ="<<tmp<<endl;
            k/=10;
            
            for(auto i:num)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            i--;
            
           
        }
        for(auto i:num)
        {
            cout<<i<<" ";
        }
        
        return num;
    }
};


using namespace std;
int main()
{
    Solution s;
    vector<int>num={2,7,4,2,4,7,8,5,0};
    int k =9999;
    num=s.addToArrayForm(num,k);
    return 0;
}