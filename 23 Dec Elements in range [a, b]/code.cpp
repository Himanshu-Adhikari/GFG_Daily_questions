class Solution {
  public:
    #define all(arr) begin(arr),end(arr)
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        sort(all(arr));
        vector<int>res;
        for(auto c:queries){
            res.push_back(upper_bound(all(arr),c[1])-lower_bound(all(arr),c[0]));
        }
        return res;
    }
};