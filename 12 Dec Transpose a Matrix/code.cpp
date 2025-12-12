// just travel on one triangle and swap with the other triangle 
class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        return mat;
    }
};