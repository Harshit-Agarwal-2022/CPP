#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k);

int main()
{
    
    vector<int> v1 = {1,12,-5,-6,50,3};
    int k = 4;
    
    cout<<"result "<<findMaxAverage(v1,k);
    
}

double findMaxAverage(vector<int>& nums, int k)
{
    
    double maxAvg = INT_MIN;
    
    /*
    
    // M1 Brute Force O(n^3)
    
    for(int i=0; i<nums.size(); i++)
    {
        for(int j = i+(k-1); j<nums.size(); j++)
        {
            double curSum = 0;
            for(int k = i; k<=j; k++)
            {
                cout<<nums[k]<<" + ";
                curSum+=nums[k];
            }
            
            maxAvg = max(maxAvg,curSum/k);
            cout<<"\n";
            
            break;
        }
    }
    
    */

    // M2 Optimized Silding Window O(n)

    int l = 0, r = k-1;
    double curSum = 0;

    for(int x = 0; x <= r; x++)
    {
        curSum += nums[x];
    }

    maxAvg = max(maxAvg,curSum/k);

    while(r<nums.size()-1)
    {
        curSum -= nums[l];
        l++;
        
        r++;
        curSum += nums[r];

        maxAvg = max(maxAvg,curSum/k);
    }

    
    return maxAvg;
    
}
