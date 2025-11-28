class Solution {
  public:
    vector<int> subsetXOR(int n) {
        // code here
        vector<int>res(n);
        int xr=0;
        for(int i=1;i<=n;i++){
            res[i-1]=i;xr=xr^i;
        }
        if(xr==n){
        return res;
        }
        else{
            vector<int>ans;
            xr=xr^n;
            for(auto c:res){
                if(c!=xr)ans.push_back(c);
            }
            return ans;
        }
    }
};
