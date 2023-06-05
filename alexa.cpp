#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, temp, x, y, n, player, counter = 0,countx=0,county=0;
    cin>>t;
    while (t--)
    {
        cin >> n;
        cin >> x >> y;
        vector<int> a;
        player = x;
        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for(auto i =a.begin();i!=a.end();++i)
        {
            if(*i%x == 0)
            {
                ++countx;
                a.erase(i);
            }
            
        }
        for(auto i =a.begin();i!=a.end();++i)
        {
            if(*i%y == 0)
            {
                ++county;
                a.erase(i);
            }
            
        }
        
        if(countx > county)
        {
            cout<<"ALEXA";
        }
        else if(county >= countx)
        {
            cout<<"SIRI";
        }
        countx=0;
        county=0;
        // while (1)
        // {

        //     cout << player << " is playing " << endl;
        //     for (auto i = a.begin(); i != a.end(); ++i)
        //     {
        //         if (*i % player == 0)
        //         {
        //             a.erase(i);
        //             // cout<<"erased :"<<<<endl;
        //             counter = 1;
        //             continue;
        //         }
        //     }
        //     for (auto i = a.begin(); i != a.end(); ++i)
        //     {
        //         cout << *i << " ";
        //     }
        //     cout << endl;
        //     if (counter == 0)
        //     {
        //         if (player == x)
        //         {
        //             cout << "SIRI" << endl;
        //         }
        //         else if (player == y)
        //         {
        //             cout << "ALEXA" << endl;
        //         }
        //         break;
        //     }
        //     if (player == x)
        //     {
        //         player = y;
        //     }
        //     else if (player == y)
        //     {
        //         player = x;
        //     }
        //     counter = 0;
        // }
    }

    return 0;
}