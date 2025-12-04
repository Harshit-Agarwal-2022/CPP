#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int>& nums) {
        
        if(nums.size()==1)
        return nums[0];
                
        sort(nums.begin(), nums.end(), greater<int>());

        int i=0;
        int count=0;

        while(count!=2)
        {
            while(i<nums.size()-1 && nums[i]==nums[i+1])
            {
                i++;
            }

            if(i == nums.size()-1)
                return nums[i];
            
            i++;
            count++;
        }

        return nums[i];
    }

    int main()
    {

        vector<int> v1 = {1,2};
        

    }