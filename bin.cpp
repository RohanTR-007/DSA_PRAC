#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> a = { 10, 20, 30, 40, 1,2,3,1,2,69};
    vector<int> b={1,2,3};
    int flag=1;
cout << "a.begin() " << *(a.begin())<<endl; //10
cout << "a.end() " << *(a.end()-1)<<endl; //12853 garbage value because it is out of bounds of the vector
cout << "a.rbegin() " << *(a.rbegin())<<endl; //50
cout << "a.rend() " << *(a.rend())<<endl; //201336894 garbage value because it is out of bounds of the vector
cout << "a.cbegin() " << *(a.cbegin())<<endl; //10
cout << "a.cend() " << *(a.cend())<<endl; //12853
    // vector<int>::iterator it;
    // it=a.begin();
    // auto nt = a.end();
    // auto res = find(it,nt,900);
    // cout<<res-it<<endl;
    // cout<<find(it,nt,0)<<endl;
    for(auto it=a.begin();it!=a.end();++it)
    {
        auto j = it;
        auto k = b.begin();
        if(*(j) == *(k))
        {
            // cout<<"j"<<*j;

            while(k!=b.end())
            {
                if((*j) != (*k)){
                    flag = 0;
                }
                ++k;
                ++j;
                // cout<<"j :"<<*j<<" "<<"k :"<<*k<<endl;
                
            }  
            if(flag == 1)
            {
                cout<<"Vector b found at position "<<it-a.begin()<<endl;
            }
                      
        }
        // cout<<" falg "<<*it<<" "<<flag;
        flag=1;
    }
    return 0;
}