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

    string encode(vector<string>& strs) {

        string res = "";
        
        for(string s: strs)
        {
            res =  res + to_string(s.length()) + '#' + s;
        }


        return res;

    }

    vector<string> decode(string s) {

        vector<string> res;


        int i = 0; 
        int cur_num  = 0;

        while(i<s.length())
        {

            if(s[i] == '#')
            {
                i++;
                string cur_str = "";

                while(cur_num != 0)
                {
                    cur_str += s[i];
                    i++;
                    cur_num--;
                    
                }
                res.push_back(cur_str);
                cur_num = 0;
                continue;
            }

            else
            {
            cur_num = cur_num*10 + ((s[i]) - '0');
            i++;
            }

        }

        
        return res;

    }
};

int main()
{
    
    vector<string> strs = {"Hello","World"};

    
    Solution sol;

    vector<string> ans = sol.decode(sol.encode(strs));

    printVectorOfStrings(ans);


    return 0;
}