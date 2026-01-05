class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sm=0,res=0;
        for(int i=0,j=0;i<arr.size();i++){
            if((i-j+1)>k)sm-=arr[j++];
            sm+=arr[i];
            res=max(res,sm);
        }
        return res;
    }
};