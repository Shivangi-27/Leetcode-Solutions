class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>> res;
        vector<int> temp;
        
        if(mat.size() * mat[0].size() != r*c)
        return mat;
        
        int col=0;
        
        for(int i=0 ; i<mat.size() ; i++)
        {
            for(int j=0 ; j<mat[i].size() ; j++)
            {
                if(col == c)
                {
                   res.push_back(temp);
                   col = 0;
                   temp.clear();
                }
                temp.push_back(mat[i][j]);
                col++;
            }
        }
        res.push_back(temp);
        
        return res;
    }
};