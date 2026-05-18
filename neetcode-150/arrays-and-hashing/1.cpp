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

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> res;

        // M1 O(n^2)
        /*
        for(int i = 0;i<nums.size();i++)
        {
            for(int j=i+1; j<nums.size();j++)
            {
                int sum = nums[i]+nums[j];
                if(sum ==  target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }

            }
        } */

        // M2 O(n)

        unordered_map<int, int> m1;

        for (int i = 0; i < nums.size(); i++)
        {

            int x = target - nums[i];
            auto it = m1.find(x);
            if (it != m1.end())
            {
                res.push_back(i);
                res.push_back(it->second);
                return res;
            }

            m1[nums[i]] = i;
        }

        return res;
    }
};

int main()
{

    vector<int> v = {2, 7, 11, 15};
    int target = 9;

    Solution sol;

    vector<int> ans = sol.twoSum(v, target);

    printVector(ans);

    return 0;
}