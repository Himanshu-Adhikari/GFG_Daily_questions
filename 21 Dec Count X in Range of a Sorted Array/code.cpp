// You are given a sorted array arr[] and a 2D array queries[][], where queries[i] represents a query in the form [l, r, x]. For each query, count how many times the number x appears in the subarray arr[l...r] (inclusive).

// ans:
// just ub and lb things

class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& q) {
        // code here
        vector<int>res;
        int n=arr.size();
        for(auto c:q){
            
            res.push_back(upper_bound(begin(arr)+c[0],begin(arr)+c[1]+1,
            c[2])-lower_bound(begin(arr)+c[0],begin(arr)+c[1]+1,c[2]));
        }
        return res;
    }
};