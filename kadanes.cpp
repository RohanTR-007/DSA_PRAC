//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    
    long long maxArr(int arr[],int size,long long max,int ni)
    {
        long long sum=0;
        long long max1=max;
        int n = ni;
        int i,count;
        for(i=0;i<=n-size;i++)
        {
            for(count=i;count<size+i;++count)
            {
                sum+=arr[count];
            }
            if(sum > max)
            {
                max1 = sum;
            }
            sum =0;
        }
        cout<<"x1 "<<max1<<endl;
        return max1;
    }
    
    long long maxSubarraySum(int arr[], int n){
    
        long long max=*max_element(arr,arr+n);
        for(int i = 2;i<=n;++i)
        {
            max=maxArr(arr,i,max,n);
        }
        // Your code here
        return max;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends