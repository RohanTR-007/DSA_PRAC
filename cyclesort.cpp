#include<bits/stdc++.h>
using namespace std;
//No's are form 1 to N(n-> length of the array)
// When given no's from range 1,N => Use cyclic sort
int main()
{
    int a[6]={3,1,2,1,4,5};
    int i=0,count=0,rep;
    while(i<6)
    {
        ++count;
        if(a[i]-1!=i)
        {
            if(a[i] == a[a[i]-1])
            {
                rep=a[i];
                break;
            }
            swap(a[i],a[a[i]-1]);
        }
        else{
            ++i;
        }
    }
    cout<<rep<<endl;
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<endl<<count;
    
    return 0;
}