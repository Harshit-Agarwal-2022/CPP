// Solved using DNF algorithm

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums);

void printVector(vector<int> &nums);

int main()
{
    vector<int> nums = {2,0,1};

    sortColors(nums);

    printVector(nums);

    return 0;
}

void sortColors(vector<int>& nums) {
    
    /* 

    // M1 Brute Force
    // Time complexity -> O(N) 
    // Space complexity -> O(3)
    
    unordered_map<int,int> m1;
    
    for(int x : nums)
    {
        m1[x]++;
    }

    for(auto it: m1)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    int i = 0;

    for(i=0; i<m1[0]; i++)
    {
        nums[i] = 0;
    }
    
    int offset = i;

    for(i=i; i<m1[1] + offset; i++)
    {
        nums[i] = 1;
    }

    offset = i;
    
    for(i=i; i<m1[2] + offset; i++)
    {
        nums[i] = 2;
    }

     */


    // M2 Optimized 
    // Time complexity  -> O(N) 
    // Space complexity -> O(0)
 
    int l = 0, m = 0, r = nums.size()-1;

    while(m <= r)
    {
        if(nums[m] == 0){
            swap(nums[m],nums[l]);
            m++;
            l++;
        }
        
        else if(nums[m] == 1){
            m++;
        }
        
        else if(nums[m] == 2){
            swap(nums[m],nums[r]);
            r--;
        }

    }    

}

void printVector(vector<int> &nums)
{
    for(int x : nums)
    {
        cout<<x<<" ";
    }

    cout<<endl;
}

