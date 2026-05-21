#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

void printVector(vector<string> &str)
{
    for (string i : str)
    {
        cout << i << " ";
    }
    cout << endl;
}

void printVectorOfString(vector<vector<string>> &v)
{
    for (auto i : v)
    {
        printVector(i);
    }

    cout << endl;
}

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        int res = 0;

        if (nums.empty())
            return 0;

        // M1 O(nlogn)

        /*


        sort(nums.begin(),nums.end());

        int curMax = 1;

        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(i+1<nums.size() && nums[i+1] == nums[i])
            {
                continue;
            }
            else if(i+1<nums.size() && nums[i+1] == nums[i]+1)
            {
                curMax++;
                res = max(res,curMax);
            }
            else
            {
                curMax = 1;
            }
        } */

        // M2 O(n)

        unordered_set<int> s(nums.begin(), nums.end());

        int curNum = INT_MIN;

        for (int num : s)
        {
            int curMax = 1;

            if (s.find(num - 1) == s.end())
            {
                curNum = num;

                while (s.find(curNum + 1) != s.end())
                {
                    curMax++;
                    curNum++;
                }

                res = max(curMax, res);
            }
        }

        return res;
    }
};

int main()
{

    vector<int> nums = {1, 0, 1, 2};

    Solution sol;

    cout << sol.longestConsecutive(nums);

    return 0;
}