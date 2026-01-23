#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
    }
};

int main()
{
    vector<int> v1 = {3,5,10,11,12,15,17};
    int k = 2;

    auto it = find(v1.begin(),v1.end(),13);

    if(it!=v1.end())
    cout<<distance(v1.begin(),it);

    else
    cout<<"not found";

}