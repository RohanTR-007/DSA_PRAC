#include<bits/stdc++.h>
using namespace std;
    
    void generate(string &s,int n,int &count)
    {
        // cout<<"s :"<<s<<" count :"<<count<<endl;
        if(count > n)
        {
            return ;
        }
        if(count == 1)
        {
            count++;
            s="0";
            cout<<"base : s :"<<s<<" count :"<<count<<endl;
            generate(s,n,count);
        }
        else
        {
            string tmp="";
            for(auto i: s)
            {
                if(i == '0')
                {
                    tmp+="01";
                }
                else
                {
                    tmp+="10";
                }
            }
            count++;
            s=tmp;
            cout<<"s :"<<tmp<<" count :"<<count<<endl;
            generate(s,n,count);
        }
        
    }
    int kthGrammar(int n, int k) {
        string s="";
        int count=1;
        generate(s,n,count);
        cout<<s<<endl;
        return s[k-1]-'0';
    }


int main()
{
    kthGrammar(10,90);
    return 0;
}    
    
