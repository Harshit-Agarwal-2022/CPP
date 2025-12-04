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

    int i=0;
    int j = i+1;
    if(nums.size()!=1){
    }
    
    return res;
}

int main()
{
    
    vector<int> nums = {1,1,1,1,1};
    int k = 1;
    
    cout<<"nice subarrays = "<<numberOfSubarrays(nums,k);
    
    return 0;
}


