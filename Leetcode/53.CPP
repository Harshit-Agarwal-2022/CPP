#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int curMax = INT_MIN;
        int curSum = 0;

        for(auto i : nums)
        {
           
            curSum = max(curSum + i, i);

            curMax = max(curSum , curMax);
        }
        
        return curMax;
    }
};

int main()
{
    vector<int> v1 = {-2,1,-3,4,-1,2,1,-5,4};

    Solution sol;
    cout<<sol.maxSubArray(v1)<<endl;

    return 0;
}