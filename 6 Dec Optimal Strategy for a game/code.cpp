class Solution {
  public:
    int maximumAmount(vector<int> &arr) {
        const int MAXN = 1001;
        int dp[MAXN][MAXN][2];
        int n=arr.size();
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i][0]=arr[i];
        }
        for(int p=2;p<=n;p++){
            for(int i=0;i+p-1<n;i++){
                int j=i+p-1;
                dp[i][j][1]=min(dp[i+1][j][0],dp[i][j-1][0]);
                dp[i][j][0]=max(arr[i]+dp[i+1][j][1],arr[j]+dp[i][j-1][1]);
            }
        }
        return dp[0][n-1][0];
    }
};
