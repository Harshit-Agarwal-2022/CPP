#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int curSum = 0;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            for(int j = i ; j < arr.size() ; j++)
            {
                for(int k = i ; k<=j ; k++)
                {
                    if((j-i) == 0 || ((j+1)-i)%2 != 0)
                    {
                        curSum += arr[k]; 
                    }
                }
            }
        }
        
        return curSum;
    }
};