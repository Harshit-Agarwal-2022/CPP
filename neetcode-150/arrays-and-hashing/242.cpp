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

class Solution {
    public:
    bool isAnagram(string s, string t) {
        
        // M1 O(nlogn)
        /* sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t)
        return true;

        return false; */

        // M2 O(N) 
        /* unordered_map<char,int> m1;
        unordered_map<char,int> m2;

        for(auto i: s)
        {
            m1[i]++;
        }

        for(auto i: t)
        {
            m2[i]++;
        }

        if(m1.size() != m2.size())
        return false;

        for(auto it : m1)
        {
            if(!m2[it.first])
            return false;

            if(it.second != m2[it.first])
            return false;

        }

        return true;
        */
       
       // M3 time-> O(N) space-> O(1)
       vector<int> freq(26,0);
       
       for(char i : s)
       freq[i-'a']++;
       
        for(char i : t)
        freq[i-'a']--;
        

        for(int i : freq)
        {
            if(i!=0)
            {
                return false;
            }
        }
        
        return true;
        
    }
};

int main()
{
    
    string s = "rat";
    string t = "car";

    Solution sol;
    
    
    cout<<sol.isAnagram(s,t);

    return 0;
}