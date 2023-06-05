#include <bits/stdc++.h>
using namespace std;
void first_negative_in_window(int a[], int n, int k)
{
    vector<int> ints;
    for (int i = 0; i < k; ++i)
    {
        if (a[i] < 0)
        {
            ints.push_back(a[i]);
        }
    }

    for (int i = 0, j = k-1; j < n && i <= n - k; ++i, ++j)
    {
        if (a[j] < 0)
        {
            ints.push_back(a[j]);
        }
        if (ints.size() == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << ints[0] << " ";
        }
        if(ints.size() > 0)
        {
            if (a[i] == ints[0])
            {
                ints.erase(ints.begin());
            }
        }
        
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    first_negative_in_window(a, n, k);
    return 0;
}