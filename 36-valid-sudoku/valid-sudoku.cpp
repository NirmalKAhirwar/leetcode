class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowCheck[9][9] = {0}, colCheck[9][9] = {0}, gridCheck[9][9] = {0};

        for(int i=0; i < board.size(); i++)
        {
            for(int j=0; j < board[i].size(); j++)
            {
                if(board[i][j] != '.')
                {
                    int num = board[i][j] - '0' - 1;
                    int k = i/3 * 3+j/3;

                    if(rowCheck[i][num] || colCheck[j][num] || gridCheck[k][num])
                    {
                        return false;
                    }

                    rowCheck[i][num] = colCheck[j][num] = gridCheck[k][num] = 1;
                }
            }
        }

        return true;
    }
};