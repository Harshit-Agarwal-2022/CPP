#include <bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int>& nums, int goal);

int main()
{
    vector<int> nums = {1,1,1,1,1,1};
    int goal = 1;

    cout<<numSubarraysWithSum(nums,goal);
    
    // cout<<"hello world w2";

    return 0;
}

int numSubarraysWithSum(vector<int>& nums, int goal) {

    int res = 0;

    

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
    
    

    
    return res;
    
}