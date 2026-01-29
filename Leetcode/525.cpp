#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int curMax = INT_MIN;
        int preSum = 0;


        for(auto &x : nums)
        {
            if(x == 0)
            x = -1;
        }

        unordered_map<int,int> m1;
        m1[0] = -1;


        for(int i = 0 ; i < nums.size() ; i++)
        {
            preSum += nums[i];

            if(m1.find(preSum)!= m1.end())
            curMax = max(curMax , i - m1[preSum]);

            else
            m1[preSum] = i;
        }

        if(curMax == INT_MIN)
        return 0;
        
        return curMax;

    }
};

int main()
{
    vector<int> test = {0,1,1,1,1,1,0,0,0};

    Solution sol;
    cout<<sol.findMaxLength(test);

    return 0;
}