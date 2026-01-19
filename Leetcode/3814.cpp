#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
    
    vector<pair<int,int>> v1;

    for(int i=0; i<costs.size(); i++){
        v1.push_back({costs[i],capacity[i]});
    }
    
    sort(v1.begin(),v1.end());


    vector<int> p;
    
    int curMax = INT_MIN;
    for(auto x: v1)
    {
        curMax = max(curMax,x.second);
        p.push_back(curMax);
    }


    int result = 0;

    for(int i=0; i<v1.size();i++)
    {
        if(v1[i].first<budget){
            result = max(result,v1[i].second);
        }
        else{
            break;
        }

        int target = budget - v1[i].first;
        int l = 0 , r = i-1 , j = -1;

        while(l<=r){
            int mid = (l+r)/2;

            if(v1[mid].first<target){
                j=mid;
                l = mid+1;
            }
            else{
                r=mid-1;
            }
        }

        if(j!=-1){

            result = max(result, v1[i].second + p[j]);
        }

    }

    return result;

    }
};



int main()
{
    vector<int> costs = {4,8,5,3};
    vector<int> capacity = {1,5,2,7};

    Solution sol;
    cout<<sol.maxCapacity(costs,capacity,8)<<endl;


    return 0;
}