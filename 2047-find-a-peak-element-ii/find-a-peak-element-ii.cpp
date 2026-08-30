class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
            int row=mat.size();
            int col=mat[0].size();
            int up, down, left, right;


            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                   if(i > 0)
    up = mat[i-1][j];
else
    up = -1;

if(i < row-1)
    down = mat[i+1][j];
else
    down = -1;

if(j > 0)
    left = mat[i][j-1];
else
    left = -1;

if(j < col-1)
    right = mat[i][j+1];
else
    right = -1;
                   if(mat[i][j]>up &&
                   mat[i][j]>down &&
                   mat[i][j]>left &&
                   mat[i][j]>right){
                    return {i,j};
                   }
                }
            }        
           return {-1,-1}; 
    }
};