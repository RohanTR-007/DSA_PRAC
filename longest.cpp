#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int limit)
    {
        int max_len = 0, max = 0, min = 0, count = 0, min_pos, max_pos, ser;
        for (int i = 0; i < nums.size(); i++)
        {
            // if(nums[i] > limit)
            // {

            max = nums[i];
            max_pos = i;
            vector<int>::iterator it;
            if (max > limit)
            {
                ser = max - limit;
            }
            else
            {
                ser = limit + max;
            }
            
            it = find(nums.begin(), nums.end(), ser);

            min_pos = (it)-nums.begin();
            min = nums[min_pos];
            // cout<<"minpos:"<<min_pos<<"maxpos:"<<max_pos<<endl;
            int diff;

            if (max > min)
            {
                diff = max - min;
            }
            else
            {
                diff = min - max;
            }
            if (diff <= limit)
            {
                if (min_pos > max_pos)
                {
                    for (int j = max_pos; j <= min_pos && j < nums.size(); j++)
                    {
                        // cout << "minpos:" << min_pos << "maxpos:" << max_pos << endl;
                        if (nums[j] > max || nums[j] < min)
                        {
                            break;
                        }
                        else
                        {
                            ++count;
                        }
                    }
                }
                else
                {
                    for(int j =min_pos;j<=max_pos && j<nums.size();j++)
                    {
                        cout<<"minpos:"<<min_pos<<"maxpos:"<<max_pos<<endl;
                        if(nums[j]>max || nums[j]<min)
                        {
                            break;
                        }
                        else{
                            ++count;
                        }
                    }
                }

                if (count > max_len)
                {
                    max_len = count;
                }
            }
            // }
            count = 0;
        }
        return max_len;
    }
};

int main()
{
    Solution s1;
    int n, limit;
    cin >> n >> limit;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << s1.longestSubarray(nums, limit);

    return 0;
}