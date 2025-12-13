// just traverse from top row and as it is a square have 2 pointers at each end
// and just swap them 

class Solution {
  public:
    void swapDiagonal(vector<vector<int>> &mat) {
        int n=mat.size();
        int i=0,j=0;
        int x=n-1;
        while(i<n){
            swap(mat[i][x],mat[i][j]);
            i++,j++,x--;
        }
    }
};
