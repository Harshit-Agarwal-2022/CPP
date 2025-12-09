#include <bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int>& nums, int goal);

int main()
{
    vector<int> nums = {0,0,0,0,0};
    int goal = 0;

    cout<<numSubarraysWithSum(nums,goal);

    return 0;
}

int numSubarraysWithSum(vector<int>& nums, int goal) {

    // int res = 0;

    /* 

    // M1 Brute Force O(n^3) 

    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i; j<nums.size(); j++)
        {
            int curSum = 0; 
            
            for(int k=i; k<=j; k++)
            {
                curSum += nums[k];
    
            }


            if(curSum == goal)
            res++;
        }
    }
    
     */

    
    
    // M2 Optimised approach sliding window (O n)
    
    unordered_map<int,int> freq;

    freq[0] = 1;          

    int sum = 0, ans = 0;

    for(int x : nums) {
        sum += x;

        if(freq.count(sum - goal))
            ans += freq[sum - goal];

        freq[sum]++;
    }
       
    return ans;
    
}