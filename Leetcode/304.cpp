#include<bits/stdc++.h>
using namespace std;


class NumMatrix {
public:

    vector<vector<int>> v1;
    vector<vector<int>> prefixSum;

    NumMatrix(vector<vector<int>>& matrix) {
        v1 = matrix;
        int m = v1.size() , n = v1[0].size();

        vector<int> temp;

        for(int i = 0; i < n; i++)
        {
            temp.push_back(0);
        }
        
        for(int i = 0; i < m; i++)
        {
            prefixSum.push_back(temp);
        }

        int curSum = 0;

        for(int i = 0; i < n; i++)
        {
            curSum += v1[0][i];
            prefixSum[0][i] = curSum;
        }
        
        curSum = 0;

        for(int i = 0; i < m; i++)
        {
            curSum += v1[i][0];
            prefixSum[i][0] = curSum;
        }

        for(int i = 1; i < m; i++)
        {   

            for(int j = 1; j<n; j++)
            {
                prefixSum[i][j] = v1[i][j]+ ((prefixSum[i-1][j] + prefixSum[i][j-1]) - prefixSum[i-1][j-1]);
            }
        }
        

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {

        
        int m = v1.size() , n = v1[0].size();
        


        if(row1==row2 && col1==col2)
        return v1[row2][col2];

        int res = prefixSum[row2][col2];
        
        if(row1-1 >= 0)
        res = res - prefixSum[row1-1][col2];
        
        if(col1-1 >= 0)
        res = res - prefixSum[row2][col1-1];

        if(row1-1 >= 0 && col1-1 >= 0)
        res = res + prefixSum[row1-1][col1-1];

        return res;

    }
};

int main()
{

    vector<vector<int>> v1;

    int m,n;
    cin>>m>>n;

    vector<int> temp;
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v1.push_back(temp);
        temp.clear();
    }
    
    NumMatrix num1(v1);
    
    int dum = num1.sumRegion(0,0,1,0);

    cout<<dum;

}