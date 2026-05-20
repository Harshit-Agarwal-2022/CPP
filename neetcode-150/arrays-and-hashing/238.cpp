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

void printVector(vector<string> &str)
{
    for (string i : str)
    {
        cout << i << " ";
    }
    cout << endl;
}

void printVectorOfString(vector<vector<string>> &v)
{
    for (auto i : v)
    {
        printVector(i);
    }

    cout << endl;
}

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        vector<int> res;

        // M1 O(n^2)
        /* int i = 0 ;

        while(i<nums.size())
        {
            int curProduct = 1;
            for(int k = 0 ; k < nums.size() ; ++k)
            {
                if(k==i)
                continue;

                curProduct *= nums[k];
            }
            res.push_back(curProduct);
            i++;
        }

        return res; */

        // M2 O(n)

        vector<int> left;
        vector<int> right;

        int curProduct = 1;

        for (int i : nums)
        {
            curProduct *= i;
            left.push_back(curProduct);
        }

        curProduct = 1;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            curProduct *= nums[i];
            right.push_back(curProduct);
        }

        reverse(right.begin(), right.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int l = 1, r = 1;

            if (i - 1 >= 0)
                l = left[i - 1];

            if (i + 1 < nums.size())
                r = right[i + 1];

            int val = l * r;

            res.push_back(val);
        }

        return res;
    }
};

int main()
{

    vector<int> nums = {0,0};

    Solution sol;

    vector<int> ans = sol.productExceptSelf(nums);

    printVector(ans);

    return 0;
}