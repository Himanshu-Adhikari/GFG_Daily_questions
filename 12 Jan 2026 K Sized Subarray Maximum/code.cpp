class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        vector<int>res;
        multiset<int>m;
        int n=arr.size();
        for(int i=0,j=0;i<n;i++){
            m.insert(arr[i]);
            if((i-j+1)==k){
                res.push_back(*m.rbegin());
                m.erase(m.find(arr[j++]));
            }
        }
        return res;
    }
};