//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    void rec(vector<vector<int>> &m, vector<vector<int>> vis, string p, vector<string> &res, int n, int i, int j)
    {
        // cout<<vis[0][0]<<endl;
        if (i == n - 1 && j == n - 1)
        {
            res.push_back(p);
            return;
        }
        if (i < n  && j < n )
        {

            if (i > 0 && m[i - 1][j] == 1 && vis[i - 1][j] == 0)
            {
                cout<<"U"<<endl;
                vis[i - 1][j] = 1;
                p.push_back('U');
                rec(m, vis, p, res, n, i - 1, j);
                p.pop_back();
                // p=x;
                vis[i - 1][j] = 0;
            }
             if (j < n - 1 && m[i][j + 1] == 1 && vis[i][j + 1] == 0)
            {
                cout << "R" << endl;
                vis[i][j + 1] = 1;
                p.push_back('R');
                rec(m, vis, p, res, n, i, j + 1);
                p.pop_back();
                vis[i][j + 1] = 0;
            }
             if (i < n - 1 && m[i + 1][j] == 1 && vis[i + 1][j] == 0)
            {
                cout << "D" << endl;
                vis[i + 1][j] = 1;
                p.push_back('D');
                rec(m, vis, p, res, n, i + 1, j);
                p.pop_back();
                vis[i + 1][j] = 0;
            }
             if (j > 0 && m[i][j - 1] == 1 && vis[i][j - 1] == 0)
            {
                cout << "L" << endl;
                vis[i][j - 1] = 1;
                p.push_back('L');
                rec(m, vis, p, res, n, i, j - 1);
                p.pop_back();
                vis[i][j - 1] = 0;
            }
            else
            {
                return;
            }
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<vector<int>> vis;
        vector<int> tmp(n, 0);
        for (int i = 0; i < n; ++i)
        {
            vis.push_back(tmp);
        }
        vector<string> res;
        string p = "";
        vis[0][0]=1;
        if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
        {
            cout<<"not possible "<<endl;
            return {};
        }
        rec(m, vis, p, res, n, 0, 0);
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    // }
    return 0;
}
// } Driver Code Ends