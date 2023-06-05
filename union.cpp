//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int count=0;
        vector<int> dup;
        for(int i =0;i<n;++i)
        {
            int *p;
            p=find(b,b+m,a[i]);
            if(p != b)
            {
                cout<<"elem in a is uni "<<a[i]<<" : "<<count<<endl;
                ++count;
            }
            else if(p == b)//same ele
            {
                
                    
                    
                auto it = find(dup.begin(),dup.end(),a[i]); 
                
                    
                    if(it == dup.end()) //dup not found
                    {
                        dup.push_back(a[i]);
                        ++count;
                        
                        cout<<"match"<<a[i]<<" : "<<count<<endl;
                    }
                
            }
        }
        for(int i =0;i<m;++i)
        {
            int *p1;
            p1=find(a,a+n,b[i]);
            if(p1 == a+n)
            {
                
                cout<<"elem in b is uni"<<b[i]<<" : "<<count<<endl;
                ++count;
            }
        }
        
        
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends