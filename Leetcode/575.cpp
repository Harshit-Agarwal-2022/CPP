#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        sort(candyType.begin(),candyType.end());

        int maxCandy = candyType.size()/2;
        int unique = 0;

        int i = 0, j = 1;

        while(j<candyType.size())
        {
            if(candyType[i] != candyType[j]){
                i++;
                j++;    
            }

            if(candyType[i] == candyType[j]){
                while(j<candyType.size() && candyType[i] == candyType[j]){
                    candyType[j] = INT_MIN;
                    j++;
                }
                i = j;
                j = i+1;
                continue;
            }
            
        }

        for(int i = 0; i < candyType.size(); i++)
        {
            if(candyType[i] == INT_MIN)
            continue;

            unique++;
        }

        cout<<"unique elements : "<<unique<<endl;
        return min(maxCandy,unique);
    
    }
};

int main()
{
    vector<int> v1 = {1, 1, 2, 2};

    Solution sol;
    cout<<sol.distributeCandies(v1)<<endl;
    
    
    return 0;

}
