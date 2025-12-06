#include <bits/stdc++.h>
using namespace std;

class NumArray {

    vector<int> nums;

    public:
    NumArray(vector<int>& nums) {
        this->nums = nums;

        // M2 misc code start

        int preSum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i==0)
            preSum = nums[i];
            
            else
            preSum += nums[i];

            this->nums[i]=preSum;

        }

        // M2 misc code end

    }
    
    int sumRange(int left, int right) {
        
        int res = 0;

        /* 
        
        // M1 O(n)
        for(int i = left; i <= right; i++)
        {
            res += nums[i];
        }
        
        */


        // M2  O(n) with Prefix sum method

        if(left == 0)
        return nums[right];

        res = nums[right] - nums[left-1];

        return res;
        
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main()
{   
    vector<int> nums = {-2, 0, 3, -5, 2, -1};

    NumArray* obj = new NumArray(nums);

    return 0;

}   