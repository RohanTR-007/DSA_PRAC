#include<bits/stdc++.h>
using namespace std;

// Generate all binary strings without consecutive 1’s

void gen_bin(string op,int n)
{
    if(n == 0)
    {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2 =op;
    op1.push_back('0');
    gen_bin(op1,n-1);
    if(op2[op2.size()-1] == '1')
    {
        return;
    }
    else{
        op2.push_back('1');
        gen_bin(op2,n-1);
    }
    
}
int main()
{
    string op="";
    int n=4;
    gen_bin(op,n);
    return 0;
}