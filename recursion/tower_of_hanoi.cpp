#include<bits/stdc++.h>
using namespace std;
void solve(int s,int d,int m, int n)
{
    if(n == 0)
    {
        return;
    }
    solve(s,m,d,n-1);
    cout<<"Disk "<<n<<" moved from "<<s<<" to "<<d<<endl;
    solve(m,d,s,n-1);
    return;
}
int main()
{
    int n=3;
    solve(1,3,2,3);
    return 0;
}