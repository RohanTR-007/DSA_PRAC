#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t)
    {
        int n,i;
        cin>>n;
        int first=0,last=n-1;
        int a[n];
        for(i =0;i<n;++i)
        {
            cin>>a[i];
        }
        while(first < (last))
        {
            if(a[first] < 0 && a[last] < 0)
            {
                ++first;
            }
            else if(a[first] > 0 && a[last] < 0)
            {
                swap(a[first],a[last]);
                ++first;
                --last;
            }
            else if(a[first] > 0 && a[last] > 0)
            {
                --last;
            }
            else
            {
                ++first;
                --last;
            }
        }
        --t;
        for(i=0;i<n;++i)
        {
            cout<<a[i]<<" ";
        }
        
        
    }
	return 0;
}