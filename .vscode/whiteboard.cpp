#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {

        int curBudget = budget-1;
        int curMax = INT_MIN;
        vector<pair<int,int>> v1;

        for(int i = 0 ; i < capacity.size() ; i++ )
        {
            v1.push_back({capacity[i],costs[i]});
        }

        sort(v1.begin(),v1.end(),greater<pair<int,int>>());

        for(auto &x : v1){
            cout<<'{'<<x.first<<','<<x.second<<'}';
        }
        cout<<endl;
        
        for(int i = 0; i < v1.size(); i++)
        {
            for(int j = i+1; j< v1.size(); j++)
            {
                if(v1[i].first + v1[j].first > curMax && v1[i].second + v1[j].second <= curBudget)
                {
                    curMax = v1[i].first + v1[j].first;
                }
            }
        }

        for(int i = 0 ; i < v1.size(); i++)
        {
            if(v1[i].first > curMax && v1[i].second <= curBudget){
                curMax =  v1[i].first;   
            }
        }

        if(curMax == INT_MIN)
        return 0;

        return curMax;
    }
};

int main()
{
    vector<int> v1 = {1, 1, 2, 2};

    string x = "abcABC9829";

    // cout<<stoi(digit)+20;

    for(auto i : x)
    {
        if(isdigit(i))
        cout<<i<<" is a digit"<<endl;
        
        if(islower(i))
        cout<<i<<" is a lowercase alphabet"<<endl;
        
        if(isupper(i))
        cout<<i<<" is a uppercase alphabet"<<endl;
    }
    
    
    return 0;

}


/* 

Q2. Maximum Capacity Within Budget

You are given two integer arrays costs and capacity, both of length n, where costs[i] represents the purchase cost of the ith machine and capacity[i] represents its performance capacity.

You are also given an integer budget.

You may select at most two distinct machines such that the total cost of the selected machines is strictly less than budget.

Return the maximum achievable total capacity of the selected machines.

Input: costs = [4,8,5,3], capacity = [1,5,2,7], budget = 8

Output: 8

*/