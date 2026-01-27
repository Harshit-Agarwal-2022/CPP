#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
         
        unordered_map<int,int> m1;
        m1[0] = 0;
        int preSum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            preSum += nums[i];
            preSum %= k;
            
            if(m1.find(preSum) != m1.end())
            {
                if((i-m1[preSum])+1 >1)
                {
                
                return true;
                }
            }
            else
            {
                m1[preSum] = i+1;
            }
        }

        return false;
    }
};