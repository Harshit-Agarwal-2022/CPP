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

void printVectorOfStrings(vector<string> &strs)
{
    for(string i: strs)
    {
        cout<<i<<" ";

    }

    cout<<endl;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> res;

        int i = 0 , j = numbers.size()-1;

        int cur_sum = 0 ;

        while(i<j)
        {
            cur_sum  = numbers[i] + numbers[j];
            
            if(cur_sum == target)
            {
                res.push_back(++i);
                res.push_back(++j);
                return res;
            }

            else if(cur_sum > target)
            {
                j--;
            }

            else
            {
                i++;
            }

        }
        return res;

    }
};

int main()
{
    
    vector<int> nums = {-1,0};

    int target = -1;

    Solution sol;

    vector<int> ans = sol.twoSum(nums , target);

    printVector(ans);

    return 0;
}