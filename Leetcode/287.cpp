#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> v1(n, 0);

        for (auto i : nums)
            v1[i]++;

        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] >= 2)
                return i;
        }

        return 0;
    }
};

int main()
{
    vector<int> test = {1,3,4,2,2};

    Solution sol;

    cout<<sol.findDuplicate(test);

    return 0;

}