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
    for(auto i : v)
    {
        printVector(i);
    }

    cout<<endl;
}

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {

        // M1 O(nlogn)
        
        vector<vector<string>> res;
        /* 
        vector<pair<string,int>> str2;

        for(int i = 0 ; i < strs.size(); ++i)
        {
            string s = strs[i];
            sort(s.begin(),s.end());

            str2.push_back({s,i});
        }

        sort(str2.begin(),str2.end());

        int i = 0;

        while(i<str2.size())
        {
           vector<string> temp;
           temp.push_back(strs[str2[i].second]);
           
           while(i+1<str2.size() && str2[i].first == str2[i+1].first)
           {
               temp.push_back(strs[str2[i+1].second]);
                i++;
           }
           res.push_back(temp);
           i++;

        } */

        // M2 using hashmaps

        unordered_map<string,vector<string>> m1;

        for(auto s: strs)
        {
            string key = s;
            sort(key.begin(),key.end());

            m1[key].push_back(s);
        }

        for(auto it : m1)
        {
            res.push_back(it.second);
        }

        return res;
    }
};

int main()
{

    vector<string> str ={"eat","tea","tan","ate","nat","bat"};

    Solution sol;

    vector<vector<string>> ans = sol.groupAnagrams(str);
    
    printVectorOfString(ans);
    
    return 0;
}