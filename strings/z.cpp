#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v(n,0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int z[n] = {0}, sum = 0;
        for (int k = 1; k < n; k++)
        {
            int i = k;
            int j = k;
            while (j < n && v[j] == v[j - i])
            {
                j++;
            }
            z[k] = j - i;
        }

        for (int i = 0; i < n; i++)
        {
            sum += z[i];
        }
        sum += n;
        cout << sum << endl;
    }
}