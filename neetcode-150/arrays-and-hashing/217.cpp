#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> s;

        for(int i : nums)
        {
            s.insert(i);
        }

        if(s.size()==nums.size())
        return false;

        return true;
    }
};


int main()
{
    vector<int> v1 = {1,2,2,4};
    Solution s;
    cout<<s.containsDuplicate(v1);

    return 0;
}