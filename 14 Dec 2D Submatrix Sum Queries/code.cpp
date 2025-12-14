class Solution {
  public:
    vector<int> prefixSum2D(vector<vector<int>> &mat, vector<vector<int>> &queries) {
        // code here
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>pre(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                pre[i+1][j+1]=-pre[i][j]+pre[i+1][j]+pre[i][j+1]+mat[i][j];
            }
        }
        vector<int>res;
        for( auto c: queries){
            int x=c[0],y=c[1];
            int i=c[2],j=c[3];
            res.push_back(pre[i+1][j+1]-pre[i+1][y]-pre[x][j+1]+pre[x][y]);
        }
        return res;
    }
};
