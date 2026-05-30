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
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[9];

        for(int i = 0 ; i < 9 ; i ++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                char val =  board[i][j];
                
                if(val =='.')
                continue;

                int box_index = (i/3)*3 + j/3;
                

                if(row[i].count(val) || col[j].count(val) || box[box_index].count(val))
                {
                    return false;
                }

                row[i].insert(val);
                col[j].insert(val);
                box[box_index].insert(val);
                
            }
        }


        return true;
    }
};

int main()
{
    vector<vector<char>> board = {
    {'8','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};
    Solution sol;

    cout<<sol.isValidSudoku(board);



    return 0;
}