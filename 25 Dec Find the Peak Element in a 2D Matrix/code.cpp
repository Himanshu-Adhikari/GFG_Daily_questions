class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]>=(i?mat[i-1][j]:INT_MIN) 
                and mat[i][j]>=(j?mat[i][j-1]:INT_MIN) and
                mat[i][j]>=((i<n-1)?mat[i+1][j]:INT_MIN) and
                mat[i][j]>=((j<m-1)?mat[i][j+1]:INT_MIN))return {i,j};
            }
        }
        return {-1,-1};
    }
};
