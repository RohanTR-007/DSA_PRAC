#include <bits/stdc++.h>
using namespace std;
vector<int> z_func(string a)
{
    int l = 0, r = 0;
    vector<int> z;
    z.push_back(0);
    for (int k = 1; k < a.size(); ++k)
    {
        if (r < k)
        {
            l = r = k;
            while (r < a.size() && a[r] == a[r - l])
            {
                ++r;
            }
            z.push_back(r - l);
            r--;
        }
        else
        {
            int k1 = k - l;
            if (z[k1] < r - k + 1)
            {
                z.push_back(z[k1]);
            }
            else
            {
                l = k;
                while (r < a.size() && a[r] == a[r - l])
                {
                    ++r;
                }
                z.push_back(r - l);
                r--;
            }
        }
    }
    return z;
}
int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int cnt = 0;
        for (auto i : z_func(s))
        {
            // cout<<i<<" ";
            cnt += i;
        }
        // cout<<endl;
        cnt += s.size();
        cout << cnt << endl;
    }

    return 0;
}
