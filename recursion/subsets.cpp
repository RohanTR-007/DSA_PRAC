#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void subset(string i,string o)
{
    if(i.size() == 0)
    {
        cnt++;
        cout<<o<<endl;
        return ;
    }
    string op1=o;
    string op2=o;
    op2+=i[0];
    i.erase(i.begin());
    subset(i,op1);
    subset(i,op2);
}

int main()
{
    string i="abc",o="";
    subset(i,o);
    cout<<"no of subsets :"<<cnt<<endl;
    return 0;
}