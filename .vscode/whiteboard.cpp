#include <bits/stdc++.h>
using namespace std;


int numberOfSubarrays(vector<int>& nums, int k) 
{
    int res=0;


    /* 
    // M1 Brute Force O(n^3)
    
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i; j<nums.size(); j++)
        {
            if((j-i)+1>=k){
                int odd = 0;
                for(int k=i; k<=j; k++)
                {
                    
                if(nums[k]%2!=0)
                    odd++;

                    
                }

                if(odd==k)
                res++;
            }
        }
    }
    
    */
    

    
       
    // M2 O(n)
    
    int l = 0, r = 0, curSum = 0;
    
    while(r<nums.size())
    {
        curSum += nums[r]%2;
        r++;

        if(curSum == k)
        {
            res++;
        }
        
        while(curSum>k)
        {
            curSum -= nums[l]%2;
            l++;
            
            if(curSum == k)
            {
                res++;
            }
            
        }
    }
    
   

    return res;
}

int main()
{
    
    vector<int> nums = {2,2,2,1,2,2,1,2,2,2};
    int k = 2;
    
    // cout<<"nice subarrays = "<<numberOfSubarrays(nums,k);

    cout<<"hello world";
    
    return 0;
}


