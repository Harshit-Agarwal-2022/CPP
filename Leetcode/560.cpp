#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        map<int,int> m1;

        m1[0] = 1;

        int curSum = 0;
        int res = 0;
        for(auto i : nums)
        {
            curSum += i;
            int diff = curSum-k;
            auto it = m1.find(diff);

            if(it!=m1.end())
            {
                res += it->second;
            }

            m1[curSum]++;

        }

        return res;
    }
};

int main()
{
    vector<int> v1 = {1,1,1};
    int k = 2;

    Solution sol;
    cout<<sol.subarraySum(v1,k)<<endl;
}