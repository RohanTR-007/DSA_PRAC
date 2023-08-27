
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        while (n--)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        n = arr.size();
        int res = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                res = min(res, ((arr[i] & arr[j]) ^ (arr[i] | arr[j])));
            }
        }
        cout << res << endl;
    }
    return 0;
}