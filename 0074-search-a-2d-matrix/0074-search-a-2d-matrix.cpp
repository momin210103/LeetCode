class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0;
        int bot = col-1;
        while(top<=bot){
            int mrow = (top + bot )/2;
            if(target>matrix[mrow][col-1]){
                top = mrow+1;
            }else if(target<matrix[mrow][0]){
                bot = mrow-1;
            }else{
                break;
            }
        }
        if(!(top<=bot)) return false;
        int mrow = (top+bot)/2;
        int l=0;
        int r = col-1;
        while(l<=r){
            int m = (l+r)/2;
            if(target>matrix[mrow][m]){
                l = m+1;
            }else if(target<matrix[mrow][m]){
                r = m-1;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};