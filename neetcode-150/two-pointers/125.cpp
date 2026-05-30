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
    bool isPalindrome(string s) {
        
        if(s == "")
        return true;

        int i = 0 , j = s.length()-1;
        
        while(i<j)
        {
            if(!isalnum(s[i]))
            {
                i++;
                continue;
            }
            
            if(!isalnum(s[j]))
            {
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j]))
            return false;

            i++;
            j--;
        }


        return true;
    }
};

int main()
{
    
    string str = "race a car";   

    Solution sol;

    cout<<sol.isPalindrome(str);

    return 0;
}