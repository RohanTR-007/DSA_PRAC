#include <bits/stdc++.h>
using namespace std;
int count_ana(string s, string p)
{
    int ans = 0, count;
    map<char, int> mp;
    for (int i = 0; i < p.length(); ++i)
    {
        if (mp.find(p[i]) == mp.end()) // not found
        {
            mp[p[i]] = 1;
        }
        else
        {
            mp[p[i]] += 1;
        }
    }
    // for(auto it=mp.begin();it!=mp.end();++it)
    // {
    //     cout<<it->first<<":"<<it->second<<endl;
    // }
    count = mp.size();
    for (int i = 0, j = 0; j < s.length(); ++j)
    {
        if (mp.find(s[j]) != mp.end())
        {
            if (mp[s[j]] != 0)
            {
                mp[s[j]] -= 1;
                if (mp[s[j]] == 0)
                {
                    count--;
                }
            }

            // cout<<s[j]<<":"<<mp[s[j]]<<endl;

            if ((count == 0) && (j - i + 1) == p.length())
            {
                ++ans;
                cout << i << "-" << j << endl;
            }
            if ((j - i + 1) == p.length())
            {
                if (mp.find(s[i]) != mp.end())
                {
                    mp[s[i]] += 1;
                    count++;
                    cout << s[i] << ":" << mp[s[i]] << endl;
                    cout << "count :" << count << endl;
                }
                ++i;
            }
        }
        else
        {
            if ((j - i + 1) == p.length())
            {
                if (mp.find(s[i]) != mp.end())
                {
                    mp[s[i]] += 1;
                    count++;
                    cout << s[i] << ":" << mp[s[i]] << endl;
                    cout << "count :" << count << endl;
                }
                ++i;
            }
        }
    }
    return ans;
}
int main()
{
    string s, p;
    cin >> s >> p;
    cout << count_ana(s, p) << endl;
    return 0;
}