#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> res;
        unordered_map<int, int> m1;

        for (int i : nums)
            m1[i]++;

        // M1 O(nlogn)
        /* vector<pair<int,int>> v1;

            for(auto it : m1)
            {
                v1.push_back({it.second,it.first});
            }

            sort(v1.begin(), v1.end(), [](auto a, auto b){
    return a.first > b.first;
});

for(int i =0 ; i<k;i++)
{
    res.push_back(v1[i].second);
    } */

        // M2 O(n)
        int size = nums.size() + 1;

        vector<vector<int>> buckets(size);

        for (auto it : m1)
        {
            buckets[it.second].push_back(it.first);
        }

        for (int i = (buckets.size() - 1); i > 0 && k > 0; i--)
        {
            if (buckets[i].empty())
                continue;

            for (int x : buckets[i])
            {
                if (k <= 0)
                    break;

                res.push_back(x);
                k--;
            }
        }

        return res;
    }
};

int main()
{

    vector<int> nums = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    int k = 2;

    Solution sol;
    vector<int> res = sol.topKFrequent(nums, k);

    printVector(res);

    return 0;
}