class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        if(mat.size() == 1) return mat[0][0];

        if (mat.size() % 2 == 0)
        {
        for(int i=0; i < mat.size(); i++)
        {
            for(int j=0; j < mat.size(); j++)
            {
                if(i == j)
                sum += mat[i][j] + mat[i][mat.size()-1-i];
            }
        }
        return sum;
        }

        else{
            for(int i=0; i < mat.size(); i++)
        {
            for(int j=0; j < mat.size(); j++)
            {
                if(i == j)
                sum += mat[i][j] + mat[i][mat.size()-1-i];
            }
        }
        int mid = mat.size() / 2;
         return sum -= mat[mid][mid]; 
        }



        

        return sum;
    }
};